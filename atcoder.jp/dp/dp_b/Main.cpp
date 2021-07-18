#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;

ll dp[100010];


int main(){
    int N, K; cin >> N >> K;
    vector<int> H(N);
    rep(i, N) cin >> H[i];

    rep(i, 100010) dp[i] = INF;

    dp[0] = 0;
    for(int i = 0; i < N; ++i){
        for(int k = 1; k<=K && i+k<N; ++k){
            chmin(dp[i+k], dp[i] + abs(H[i+k] - H[i]));
        }
    }

    cout << dp[N-1] << endl;
}
