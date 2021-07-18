#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    vector<int> v;
    int result = 0;
    cin >> n;
    rep(i, n){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), ::greater<int>());
    rep(i, v.size()){
        if(i%2 == 0) result += v[i];
        else result -= v[i];
    }
    cout << result << endl;
}
