#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c = 9;
  bool res = true;
  for(int i = 0; i<8; i++){
    int m;
    cin>>m;
    if(m==9){
        res = false;
    }
  }
  if(res) cout<<'S'<<"\n";
  else cout<<'F'<<"\n";
  return 0;
}