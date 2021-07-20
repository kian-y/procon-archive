#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;
const double PI = acos(-1);

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    int cnt = 0;
    bool ok = true;
    while(true) {
        rep(i, N) {
            if(A[i] % 2 == 0) {
                A[i] = A[i] / 2;
            } else {
                ok = false;
                break;
            }
        }
        if(ok) {
            cnt++;
        } else {
            break;
        }
    }
    cout << cnt << endl;

}