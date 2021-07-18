#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool okay(vector<int> &v, int x, int k){
    ll times = 0;
    rep(i, v.size()){
        times += (v[i] - 1) / x;
    }
    return times <= k;

}

int main(){
    int N, K; cin >> N >> K;
    vector<int> v(N);
    rep(i, N){
        cin >> v[i];
    }
    int l = 0, r = 1e9;
    while(r-l > 1){
        int m = (l + r) / 2;
        if(okay(v, m, K)){
            r = m;
        }else{
            l = m;
        }
    }
    cout << r << endl;
}

