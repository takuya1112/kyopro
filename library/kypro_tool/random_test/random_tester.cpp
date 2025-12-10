#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "all.hpp"

// ======================================================
//                  FRAMEWORK 触らないでOK
// ===================++++++=============================


template<typename Input, typename Output>
struct RandomTester {

    using GenType = std::function<Input()>;
    using FuncType = std::function<Output(const Input&)> ;
    using PrinterTypeI = std::function<void(const Input&)>;
    using PrinterTypeO = std::function<void(const Output&)>;
    using Compare = std::function<bool(const Output&, const Output&)>;
    
    GenType generator;

    FuncType solver_main;
    FuncType solver_naive;
    
    PrinterTypeI printer_input;
    PrinterTypeO printer_output;

    Compare comparater = [](const Output& a, const Output& b) { return a == b; };

    RandomTester(GenType gen, FuncType main, FuncType naive, PrinterTypeI in, PrinterTypeO out) 
    : generator(gen), solver_main(main), solver_naive(naive), printer_input(in), printer_output(out) {}

    void check_error(Output& out, bool& ok, const Input& in, const string& name) {
        try {
            if (name == "main") out = solver_main(in);
            else out = solver_naive(in);
        } catch (const exception& e) {
            ok = false;
            cerr << "[ERROR] " << name << " solver crashed\n";
            cerr << "std exception: " << e.what() << "\n";
        } catch (...) {
            ok = false;
            cerr << "[ERROR] " << name << " solver crashed\n";
            cerr << "unknown exception\n";
        }
    }
     
    //　出力のデバッグ用
    void debug_one() {
        Input in = generator();
        cout << "====== DEBUG  INPUT =====\n";
        printer_input(in);
    }

    void execution_time() {
        cout << "========= RESULT =========\n";
        Input in = generator();
        cout << "[INPUT]\n";
        print_in(in);

        Output out_main, out_naive;

        cout << "[MAIN OUTPUT]\n";
        int ti_main = clock();
        out_main = solver_main(in);
        printer_output(out_main);
        printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti_main) / CLOCKS_PER_SEC);

        cout << "[NAIVE OUTPUT]\n";
        int ti_naive = clock();
        out_naive = solver_naive(in);
        print_out(out_naive);
        printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti_naive) / CLOCKS_PER_SEC);
        cout << "==========================\n";
    }

    void run(int iterations = 100000) {
        for (int i = 0; i < iterations; i++) {
            Input in = generator();
            Output out_main, out_naive;
            bool main_ok = true, naive_ok = true;

            check_error(out_main, main_ok, in, "main");
            check_error(out_naive, naive_ok, in, "naive");

            if (!main_ok || !naive_ok || !comparater(out_main, out_naive)) {
                cout << "======= WA FOUNDED! =======\n";
                cout << "[INPUT]\n";
                printer_input(in);

                cout << "[MAIN OUTPUT]\n";
                printer_output(out_main);

                cout << "[NAIVE OUTPUT]\n";
                printer_output(out_naive);
                cout << "==========================\n";
                return;
            }
        }
        cout << "All TESTS PASSED!\n";
    }
};


// ======================================================
// 　　　　　　　     MAIN
// ======================================================

int main() {
    RandomTester<TestCase, vector<long long>> tester(random_case, fast, naive, print_in, print_out);
    tester.run();
    return 0;
}