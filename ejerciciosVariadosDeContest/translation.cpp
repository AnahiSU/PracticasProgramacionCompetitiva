#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  string s,s1;
  cin>>s>>s1;
  reverse(s1.begin(),s1.end());
  (s==s1)? cout<<"YES":cout<<"NO";
  return 0;

}