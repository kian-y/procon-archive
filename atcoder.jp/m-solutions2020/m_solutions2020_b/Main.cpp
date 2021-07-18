#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool check(int a, int b, int c){
    if(a*2 < b && b < c) return true;
    if(a < b*2 && b*2 < c) return true;
    if(a < b && b < c*2) return true;
    return false;
}

bool check(int a, int b, int c, int k){
    k--;
    if(k == 0){
        return check(a, b, c);
    }
    return check(a*2, b, c, k) || check(a, b*2, c, k) || check(a, b, c*2, k);
}

int main(){
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    if(check(a,b,c,k)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
