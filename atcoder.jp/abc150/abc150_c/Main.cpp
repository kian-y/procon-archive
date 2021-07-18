#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void print(vector<int> v){
    for(auto el : v){
        cout << el << " ";
    }
    cout << endl;
}

int main(){
    int N; cin >> N;
    vector<int> vec(N), p(N), q(N);
    rep(i,N) vec[i] = i+1;
    rep(i,N) cin >> p[i];
    rep(i,N) cin >> q[i];

    int a,b;
    a=b=-1;
    int i=1;
    do{
        if(vec == p) a = i;
        if(vec == q) b = i;
        i++;
    }while(next_permutation(vec.begin(), vec.end()));
    cout << fabs(a-b) << endl;
}