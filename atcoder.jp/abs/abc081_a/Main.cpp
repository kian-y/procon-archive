#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
  	int i = 0;
	int cnt = 0;
  	for(i = 0; i < s.length(); i++){
      	if( s[i] == '1' ){
          	cnt++;
        } 
    }
    // 出力
    cout << cnt << endl;
    return 0;
}