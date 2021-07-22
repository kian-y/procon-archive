#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;
const double PI = acos(-1);

void count753(ll N, ll current, ll &cnt, int flag) {
    if(current > N) return;
    if(flag == 7) ++cnt;
    //cout << current << endl;
    count753(N, current * 10 + 7, cnt, flag | 4);
    count753(N, current * 10 + 5, cnt, flag | 2);
    count753(N, current * 10 + 3, cnt, flag | 1);
}

int main() {
    ll N;
    cin >> N;

    ll cnt = 0;
    count753(N, 3, cnt, 1);
    count753(N, 5, cnt, 2);
    count753(N, 7, cnt, 4);
    
    cout << cnt << endl;
}