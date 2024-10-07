#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int n;
  cin>>n;
  for(int i = 0; i<n; i++){
    int y,un,pr;
    cin>>y>>un>>pr;
    if(y%2 == 0){
        cout<<(y/2) * pr;
    }else{
        int pares = y/2;
        int sol = ((y/2) *2) - y;
        int op1 = pares*pr + un*sol;
        int op2 = un*y;
        if(op1<op2){
            cout<<op1<<"\n";
        }else{
            cout<<op2<<"\n";
        }
         
    }
  }

  return 0;

}