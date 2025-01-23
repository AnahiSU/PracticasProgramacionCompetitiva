#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int cas,cont,pos,piv = -1;
  cin>>cas>>pos;

  for(int i = 0;i<cas;i++){
    int num;
    cin>>num;
    if(i==pos){
        piv = num;
    }else{
        if(piv==-1){
            cont++;
        }else{
            if(num>=piv){
                cont++;
            }
        }
    }
  }
  cout<<cont;

  
  return 0;
}