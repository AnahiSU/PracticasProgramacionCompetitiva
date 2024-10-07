#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int k,n,w, cont = 0;
  cin>>k>>n>>w;
  for(int i = 0;i<w;i++){
    cont += k*i;
  }

  if(cont>n){
    cout<<cont-k;
  }else{
    cout<<0;
  }
  return 0;

}