#include<iostream>
#include <vector>
#include<cstdio>
using namespace std;

vector<vector<int>> beki(int n){
    vector<vector<int>> vc;
    vector<int> org;
    for(int i=0; i<n; i++){
        org.push_back(i);
    }
    for (int i=0; i<(1<<n); i++){
        vector<int> v;
        for (int j=0; j<n; j++){
            if ((i>>j) & 1){
                v.push_back(org.at(j));
            }
        }
        vc.push_back(v);
    }
    return vc;
}

int count(char ar[6][6], int h, int w){
    int cnt = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(ar[i][j] == '#') cnt++;
        }
    }
    return cnt;
}

void cp(char ar[6][6], char orig[6][6], int h, int w){
        for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            ar[i][j] = orig[i][j];
        }
    }
}
 
int main(){
  int h,w,k;
  char ar[6][6] = {{}};
  char tmp[6][6] = {{}};

  cin >> h >> w >> k;
  for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
          cin >> ar[i][j];
      }
  }

  vector<vector<int>> vvh = beki(h);
  vector<vector<int>> vvw = beki(w);
  int cnt = 0;

  for(int i=0; i<vvh.size(); i++){
      for(int j=0; j<vvw.size(); j++){
            cp(tmp, ar, h, w);
            vector<int> vh = vvh.at(i);
            vector<int> vw = vvw.at(j);
            for(int k=0; k<vh.size(); k++){
                for(int l=0; l<w; l++){
                    tmp[vh.at(k)][l] = 'x';
                }
            }
            for(int k=0; k<vw.size(); k++){
                for(int l=0; l<h; l++){
                    tmp[l][vw.at(k)] = 'x';
                }   
            }
            if(count(tmp, h, w) == k) cnt++;
      }
  }
  cout << cnt << endl;
}