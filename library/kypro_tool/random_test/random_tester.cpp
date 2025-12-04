#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "random_gen.hpp"

// ======================================================
//                  FRAMEWORK 触らないでOK
// ===================++++++=============================

RandomGen gen;

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
//          問題に合わせてそれぞれの型を変える
// ======================================================

// 入力データの型を定義する
struct TestCase {
    int n;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << endl;
}

// WAの時の出力データを出力する関数
void print_out(const bool& out) {
    if (out) cout << 1 << endl;
    else cout << 0 << endl;
}

// 入力データのランダム生成する関数
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(0, 20);
    return in;
}

// ナイーブ(愚直解法)のコード
bool is_prime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool naive(const TestCase &tc) {
    return is_prime(tc.n); 
}

// 試したいコード
std::vector<int> sieve(int n) {
    std::vector<int> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= n; i++) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            is_prime[j] = 0;
        }
    }
    return is_prime;
} 

bool fast(const TestCase &tc) {
    vector<int> a = sieve(tc.n);
    return a[tc.n];
}

// ======================================================
// 　　　　　　　     MAIN
// ======================================================

int main() {
    RandomTester<TestCase, bool> tester;
    tester.generator = random_case;
    tester.solver_main = fast;
    tester.solver_naive = naive;
    tester.printer_input = print_in;
    tester.printer_output = print_out;
    tester.run();
    return 0;
}