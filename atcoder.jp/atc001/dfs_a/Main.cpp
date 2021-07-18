#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define ll long long
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool seen[510][510];

void dfs(int h, int w){
    seen[h][w] = true;

    // 4方向を探索
    rep(dir, 4){
        int nh = h + dx[dir];
        int nw = w + dy[dir];
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue; // 範囲外
        if(field[nh][nw] == '#') continue; // 道
        if(seen[nh][nw]) continue; // 探索済
        dfs(nh, nw); 
    }
}

int main(){
    cin >> H >> W;
    field.resize(H);
    rep(i, H) cin >> field[i];

    //sとgの位置をとっておく
    int sh, sw, gh, gw;
    rep(i, H){
        rep(j, W){
            if(field[i][j] == 's') sh = i, sw = j;
            if(field[i][j] == 'g') gh = i, gw = j;
        }
    }

    memset(seen, 0, sizeof(seen));
    dfs(sh, sw);

    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
