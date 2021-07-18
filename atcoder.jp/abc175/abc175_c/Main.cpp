#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    ll X, K, D; cin >> X >> K >> D;
    ll ans;
    if (X < 0) X = - X;

    if( X / D >= K){
        ans = X - K * D;
    }else{
        ll shou = X / D;
        ll amari = X % D;
        if((K - shou)%2 == 0){
            ans = amari;
        }else{
            ans = abs(amari - D);
        }
    }
    cout << ans << endl;
}

