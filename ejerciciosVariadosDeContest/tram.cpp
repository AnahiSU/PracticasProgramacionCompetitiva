#include <bits/stdc++.h>
 
using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int may = -1,c = 0,tot = 0;
  cin>>c;
  for(int i = 0; i < c ; i++){
    int n,m;
    cin>>n>>m;
    if(i == 0){
        tot = m;
        may = tot;
    }else{
        tot = tot-n+m;
        if(tot > may){
            may = tot;
        }
    }
   
  }
  cout<<may;
  
  return 0;
}