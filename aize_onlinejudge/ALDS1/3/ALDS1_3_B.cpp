#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;
#define LEN 100005

typedef struct pp {
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) {return a < b ? a : b; }

int main() {
    int elaps = 0, c;
    int q;
    P u;
    scanf("%d %d", &n, &q);
    rep(i, 1, n + 1) {
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }

    head = 1; tail = n + 1;

    while (head != tail) {
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elaps += c;
        if (u.t > 0) enqueue(u);
        else {
            printf("%s %d\n", u.name, elaps);
        }
    }
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
// using pint = pair<string, int>;

// const int MAX = 100001;
// int head, tail;
// pint que[MAX];

// bool isEmpty() {
//     return head == tail;
// }

// void enqueue(string name, int x) {
//     que[tail] = {name, x};
//     if (tail + 1 == MAX) tail = 0;
//     else tail++;
// }

// pint dequeue() {
//     pint p = que[head];
//     if (head + 1 == MAX) head = 0;
//     else head++;
//     return p;
// }

// int main() {
//     int n, q, time;
//     string name;
//     cin >> n >> q;
    
//     head = 0; tail = 0;
//     rep(i, 0, n) {
//         cin >> name >> time;
//         enqueue(name, time);
//     }   

//     ll ans = 0;
//     while(!isEmpty()) {
//         auto [name, time] = dequeue();
//         if (time > q) {
//             ans += q;
//             enqueue(name, time - q);
//         } else {
//             ans += time;
//             cout << name << ' ' << ans << endl;
//         }
//     }
//     return 0;
// }