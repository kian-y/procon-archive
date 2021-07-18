#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int n, a, b;
    int result = 0;
    cin >> n >> a >> b;
    rep(i, n + 1){
        string s = to_string(i);
        int sum = 0;
        rep(j, s.size()){
            sum += (int)(s[j] - '0');
        }
        if(a <= sum && sum <= b) result += i;
    }
    cout << result << endl;
}
