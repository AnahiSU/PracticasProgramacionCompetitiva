#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int k,ant = 0,dan = 0;
  cin>>k;
  for(int i = 0; i<k;i++){
    char j;
    cin>>j;
    if(j=='A'){
        ant++;
    }else{
        dan++;
    }
    
  }

  if(ant>dan){
        cout<<"Anton";
    }else{
        if(dan>ant){
            cout<<"Danik";
        }else{
            cout<<"Friendship";
        }
    }
  return 0;

}