#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    vector<int> v;
    cin >> n;
    rep(i, n){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    decltype(v)::iterator result = unique(v.begin(), v.end());
    v.erase(result, v.end());
    cout << v.size() << endl;
}
