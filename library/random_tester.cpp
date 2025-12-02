#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

// ======================================================
//                  FRAMEWORK 触らないでOK
// ===================++++++=============================

mt19937 rng(random_device{}());

template<typename T>
T random_long (T a, T b) {
    return uniform_int_distribution<T>(a, b)(rng);
}

template<typename InputType, typename OutputType>
struct RandomTester {

    using GenType = std::function<InputType()>;
    using FuncType = std::function<OutputType(const InputType&)> ;
    using PrinterTypeI = std::function<void(const InputType&)>;
    using PrinterTypeO = std::function<void(const OutputType&)>;
    
    GenType generator;

    FuncType solver_main;
    FuncType solver_naive;
    
    PrinterTypeI printer_input;
    PrinterTypeO printer_output;

    void run(int iterations = 100000) {
        for (int i = 0; i < iterations; i++) {
            InputType input = generator();

            OutputType out_main = solver_main(input);
            OutputType out_naive = solver_naive(input);

            if (out_main != out_naive) {
                cout << "WA FOUNDED!\n";
                cout << "======input======\n";
                printer_input(input);
                cout << "=====output======\n";
                cout << "Main: ";
                printer_output(out_main);
                cout << "Naive: ";
                printer_output(out_naive);
                cout << "================\n";
                return;
            }
        }
        cout << "All Tests Passed!\n";
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
    cout << 0 << endl;
}

// 入力データのランダム生成する関数
TestCase random_case() {
    TestCase in;
    in.n = random_long(1, 100);
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