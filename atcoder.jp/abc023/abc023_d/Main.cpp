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

    vector<ll> H(N), S(N);
    
    rep(i, N) {
        cin >> H[i] >> S[i];
    }

    ll left = 0, right = INF;

    while(right - left > 1) {
        ll middle = (right + left) / 2;
        bool ok = true;
        vector<ll> t(N, 0);
        rep(i, N) {
            if(middle - H[i] < 0) {
                ok = false;
                break;
            }
            t[i] = (middle - H[i]) / S[i];
        }
        sort(t.begin(), t.end());
        rep(i, N) {
            if(t[i] < i) {
                ok = false;
            }
        }
        // cout << left << " " << middle << " " << right << " " << ok << endl;
        if(ok) {
            right = middle;
        } else {
            left = middle;
        }
    }
    cout << right << endl;
}