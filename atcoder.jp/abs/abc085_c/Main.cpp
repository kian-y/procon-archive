#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void print(int i, int j, int k){
    cout << i << " " << j << " " << k << endl;
}

int main(){
    int n, y;
    cin >> n >> y;
    rep(i, n+1){
        if(10000*i + 5000*(n-i) < y) continue;
        if(10000*i > y) break;
        rep(j, n+1-i){
            if(10000*i + 5000*j + 1000*(n-i-j) == y){
                print(i,j,n-i-j);
                return 0;
            }
        }
    }
    print(-1,-1,-1);
}
