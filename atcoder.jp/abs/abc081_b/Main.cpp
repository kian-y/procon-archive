#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n;
  vector<int> v;
  
  cin >> n;
  rep(i,n){
    int el;
    cin >> el;
    v.push_back(el);
  }
  
  int cnt = 0;
  while(true){
    bool result = true;
    rep(i,n){
      if(v[i]%2 == 0){
        v[i] = v[i]/2;
      }else{
        result = false;
        break;
      }
    }
    if(result) cnt++;
    else break;
  }
  cout << cnt << endl;
}
