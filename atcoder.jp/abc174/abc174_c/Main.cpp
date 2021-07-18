#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    ll K; cin >> K;
    if(K % 2 == 0 || K % 5 == 0){
        cout << -1 << endl;
        return 0;
    }

    ll ans = 1;
    ll bp;
    while(1){
        bp = (bp * 10 + 7) % K;
        if(bp == 0) break;
        ++ans;
    }
    cout << ans << endl;
}

