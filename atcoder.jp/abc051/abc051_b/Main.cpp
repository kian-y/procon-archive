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
    int K, S;
    cin >> K >> S;

    int ans = 0;

    rep(x, K + 1) {
        rep(y, K + 1) {
            int z = S - x - y;
            if(0 <= z && z <= K) ans++;
        }
    }
    cout << ans << endl;
}