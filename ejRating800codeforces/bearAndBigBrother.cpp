#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int a,b,c = 0;
  cin>>a>>b;
  while(a<=b){
    a = a*3;
    b = b*2;
    c++;
  }
  cout<<c;
  
  return 0;
}