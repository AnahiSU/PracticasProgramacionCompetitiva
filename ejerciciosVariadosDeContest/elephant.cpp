#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  if(c%5 == 0){
    cout<<c/5;
  }else{
    cout<<(c/5)+1;
  }
  
  return 0;
}