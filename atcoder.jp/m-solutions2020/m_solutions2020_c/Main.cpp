#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N, K; cin >> N >> K;
    queue<int> Q;
    rep(i, K){
        int a; cin >> a;
        Q.push(a);
    }
    rep(i, N-K){
        int a; cin >> a;
        Q.push(a);
        if(Q.front() < Q.back()) cout << "Yes" << endl;
        else cout << "No" << endl;
        Q.pop();
    }
}
