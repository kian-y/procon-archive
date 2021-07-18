#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N; cin >> N;
    vector<int> H(N);
    rep(i, N) cin >> H[i];

    vector<ll> dp(N);
    dp[0] = 0;
    dp[1] = abs(H[1] - H[0]);
    
    for(int i = 2; i < N; ++i){
        dp[i] = min(dp[i-2] + abs(H[i] - H[i-2]), dp[i-1] + abs(H[i] - H[i-1]));
    }

    cout << dp[N-1] << endl;
}
