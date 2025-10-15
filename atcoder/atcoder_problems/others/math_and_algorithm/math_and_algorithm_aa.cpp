#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;


void merge(vector<int> &a, int left, int mid, int right) {
    int n1 = mid - left, n2 = right - mid;
    vector<int> L(n1+1), R(n2+1);
    rep(i, 0, n1) L[i] = a[left + i];
    rep(i, 0, n2) R[i] = a[mid + i];
    L[n1] = inf;
    R[n2] = inf;

    int i = 0;
    int j = 0;
    rep(k, left, right) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<int> &a, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    mergeSort(A, 0, N);
    rep(i, 0, N) cout << A[i] << " ";
    cout << endl;
    return 0;
}