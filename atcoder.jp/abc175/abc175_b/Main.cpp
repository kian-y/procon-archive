#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N; cin >> N;
    vector<ll> V(N);
    rep(i, N) cin >> V[i];

    int ans = 0;
    
    for(int i = 0; i<N-2; i++)
        for(int j = i+1; j<N-1; j++)
            for(int k = j+1; k<N; k++){
                if(V[i] == V[j] || V[j] == V[k] || V[k] == V[i]) continue;
                if(V[i]+V[j]>V[k] && V[j]+V[k]>V[i] && V[k]+V[i]>V[j]) ans++;
                
            }
   
    cout << ans << endl;
}

