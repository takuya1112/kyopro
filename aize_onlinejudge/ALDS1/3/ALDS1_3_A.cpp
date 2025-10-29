#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int top, S[1000];

void push(int x) {
    S[++top] = x;
}

int pop() {
    top--;
    return S[top + 1];
}

int main() {
    int a, b;
    top = 0;
    char s[100];

    while(scanf("%s", s) != EOF) {
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if (s[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(s));
        }
    }
    printf("%d\n", pop());
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int MAX = 1000;
// int st[MAX] = {};

// int main() {
//     string s;
//     int top = 0;
//     while (cin >> s) { 
//         if (s == "+") {
//             top--;
//             st[top] = st[top] + st[top + 1];  
//         }
//         else if (s == "-") {
//             top--;
//             st[top] = st[top] - st[top + 1];
//         }
//         else if (s == "*") {
//             top--;
//             st[top] = st[top] * st[top + 1];
//         }
//         else {
//             top++;  
//             st[top] = stoi(s);
//         }
//     }
//     cout << st[top] << endl;
//     return 0;
// }