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

    vector<ll> A(N), B(N), C(N);

    for(int i = 0; i < N; ++i) {
        cin >> A[i] >> B[i] >> C[i];
    }

    vector<vector<ll>> dp(3, vector<ll>(N + 1, 0));

    for(int i = 0; i < N; ++i) {
        chmax(dp[0][i + 1], dp[1][i] + B[i]);
        chmax(dp[0][i + 1], dp[2][i] + C[i]);

        chmax(dp[1][i + 1], dp[2][i] + C[i]);
        chmax(dp[1][i + 1], dp[0][i] + A[i]);

        chmax(dp[2][i + 1], dp[0][i] + A[i]);
        chmax(dp[2][i + 1], dp[1][i] + B[i]);
    }

    cout << max(dp[0][N], max(dp[1][N], dp[2][N])) << endl;
}