#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  string s;
  vector<int> vec;
  cin>>s;

  for(int i = 0; i<s.size();i=i+2){
    vec.push_back(s[i]-48);
  }
  sort(vec.begin(),vec.end());
  for(int i = 0;i < vec.size();i++){
    cout<<vec.at(i);
    if(i!=vec.size()-1){
        cout<<'+';
    }
  }
  
  return 0;
}