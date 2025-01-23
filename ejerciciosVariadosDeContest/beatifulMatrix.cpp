#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c,fil,col;
  for(int i = 0; i<5;i++){
    for(int j = 0; j<5;j++){
        cin>>c;
        if(c == 1){
            fil = i;
            col = j;
        }
    }
  }

  cout<<abs(fil+1-3)+abs(col+1-3);
  
  return 0;
}