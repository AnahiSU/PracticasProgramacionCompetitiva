#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int b,c=0;
  cin>>b;
  for(int i = 0; i<b;i++){
    char a;
    cin>>a;
    if(a == 'a'){
        c++;
    }else{
        if(c<2){
            c-=1;
        }
    }

  }
  cout<<c;
  return 0;
}