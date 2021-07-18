#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N; cin >> N;
    string S; cin >> S;
    int a = 0;
    int b = S.size() - 1;

    int ans = 0;
    while(a < S.size() && b >= 0){
        while(S[a] == 'R' && a < S.size()) ++a;
        while(S[b] == 'W' && b >= 0) --b;
        if(a < b){
            ++ans;
            ++a;
            --b;
        }else{
            break;
        }
    }
    cout << ans << endl;
}

