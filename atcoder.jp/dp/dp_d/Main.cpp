#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;

int N, W;
ll dp[110][100010];
ll w[100], v[100];

int main(){
    cin >> N >> W;
    rep(i, N){
        cin >> w[i] >> v[i];
    }

    for(int i = 0; i<N; ++i){
        for(int sum_w = 0; sum_w<=W; ++sum_w){
            if(sum_w - w[i] >= 0){
                chmax(dp[i+1][sum_w], dp[i][sum_w-w[i]] + v[i]);
            }
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
}
