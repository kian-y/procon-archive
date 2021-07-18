#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int a,b,c,x;
    int cnt = 0;
    cin >> a >> b >> c >> x;
    rep(i, a+1){
        if(500*i + 100*b + 50*c < x) continue;
        if(500*i > x) break;
        rep(j, b+1){
            rep(k, c+1){
                if(500*i + 100*j + 50*k == x) cnt++;
            }
        }
    }
    cout << cnt << endl;
}
