#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  string s;
  cin>>s;
  if(s[0]>96 && s[0]<123){
    s[0] = s[0]-32;
  }
  cout<<s;
  
  return 0;
}