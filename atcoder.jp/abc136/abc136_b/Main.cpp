#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    rep(i, n){
        int num = i+1;
        if(to_string(num).size()%2 == 1) ++cnt;
    }
    cout << cnt << endl;
}
