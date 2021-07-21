#include <bits/stdc++.h>
#define rep(i, n)  for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const ll INF = 1LL << 60;
const double PI = acos(-1);

int main() {
    string S;
    cin >> S;

    ll sum = 0;

    for(int i = 0; i < (1 << (S.size() - 1)); ++i ) {
        vector<ll> arr;
        arr.push_back(S[0] - '0');

        for(int j = 0; j < S.size() - 1; ++j) {
            if((i >> j) & 1 == 1) {
                arr.push_back(S[j + 1] - '0');
            } else {
                arr[arr.size() - 1] = arr[arr.size() - 1] * 10 + (S[j + 1] - '0');
            }
        }

        ll intermediate = 0;
        for(int j = 0; j < arr.size(); ++j) {
            intermediate += arr[j];
        }
        //cout << intermediate << endl;
        sum += intermediate;
    }

    cout << sum << endl;

}