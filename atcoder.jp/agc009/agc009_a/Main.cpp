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

    vector<ll> A(N), B(N);
    
    rep(i, N) {
        cin >> A[i] >> B[i];
    }

    ll sum = 0; // 足した合計分

    for(int i = N - 1; i >= 0; --i) {
        A[i] += sum; // 最初に今までの増分をたす
        ll r = A[i] % B[i];
        ll d = 0;
        if(r != 0) {
            d = B[i] - r; // (a + d) % b == 0 を満たすようなdの最小値
        }
        sum += d;
    }

    cout << sum << endl;
}