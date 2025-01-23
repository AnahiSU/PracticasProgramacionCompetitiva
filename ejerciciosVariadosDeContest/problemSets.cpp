#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  for(int i = 0;i<c;i++){
    string s;
    cin>>s;
    cout<<s[0]<<s.length()-2<<s[s.length()-1];
  }
  
  return 0;
}