#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int cont = 0, n,f;
  cin>>n>>f;
  
  for(int i = 0; i<n; i++){
    int h;
    cin>>h;
    if(h>f){
        cont = cont+2;
    }else{
        cont++;
    }
  }
  cout<<cont;
  
  return 0;
}