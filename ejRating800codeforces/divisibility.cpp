#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int a,b;
  cin>>a,b;
  if(a%b == 0){
    cout<<0;
  }else{
    cout<<b -a%b;
  }
  
  return 0;
}