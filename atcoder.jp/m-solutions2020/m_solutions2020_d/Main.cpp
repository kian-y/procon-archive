#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N; cin >> N;
    vector<int> stocks(N);
    vector<int> action(N); // 0 Nothing, 1 buy, 2 sell
    rep(i, N){
        cin >> stocks[i];
    }
    bool up = false;
    rep(i, N-1){
        if(stocks[i] < stocks[i+1]){ // up
            if(!up){
                action[i] = 1;
                up = true;
            }
        }else if(stocks[i] > stocks[i+1]){ // down
            if(up){
                action[i] = 2;
                up = false;
            }
        }
    }
    action[N-1] = 2;

    ll money = 1000;
    ll stk = 0;
    rep(i, N){
        if(action[i] == 1){
            stk = money / stocks[i];
            money = money % stocks[i];
        }
        if(action[i] == 2){
            money = stk * stocks[i] + money;
            stk = 0;
        }
        //cout << action[i] << " money: " << money << " stk: " << stk << endl;
    }
    cout << money << endl;
}
