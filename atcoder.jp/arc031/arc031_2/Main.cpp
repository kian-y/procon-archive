#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define ll long long
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

const int H = 10;
const int W = 10;

vector<string> field;

void dfs(int h, int w, vector<string> &field){
    field[h][w] = 'x';
    rep(dir, 4){
        int nh = h + dx[dir];
        int nw = w + dy[dir];
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if(field[nh][nw] == 'x') continue;
        dfs(nh, nw, field);
    }
}

int main(){
    field.resize(H);
    rep(i,H) cin >> field[i];

    bool ans = false;

    rep(i,H) rep(j,W) {
        if(field[i][j] == 'o') continue;
        vector<string> n_field = field; // copy field
        n_field[i][j] = 'o';
        int cnt = 0;
        rep(k, H) rep(l, W) {
            if(n_field[k][l] == 'x') continue;
            dfs(k,l, n_field);
            ++cnt;
        }
        if(cnt == 1){
            ans = true;
            break;
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
