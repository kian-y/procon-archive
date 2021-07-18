#include<iostream>
using namespace std;
 
int main(){
  int n;
  int ar[4] = {};

  cin >> n;
  for(int i=0; i<n; i++){
      string s;
      cin >> s;
      if(equal(s.begin(), s.end(), "AC")) ar[0]++;
      if(equal(s.begin(), s.end(), "WA")) ar[1]++;
      if(equal(s.begin(), s.end(), "TLE")) ar[2]++;
      if(equal(s.begin(), s.end(), "RE")) ar[3]++;
  }

  cout << "AC x " << ar[0] << endl;
  cout << "WA x " << ar[1] << endl;
  cout << "TLE x " << ar[2] << endl;
  cout << "RE x " << ar[3] << endl;
}