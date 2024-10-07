#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c, t = 0, tRes = 0,dir = 0, ant = 0;
  cin>>c;
  for(int i = 0; i<c; i++){
    int a,b;
    cin>>a>>b;
    if(i==0){
        t = a+10;
        dir = b;
        ant = a;
    }else{
        if(b==dir){
            if(a<=t){
                t+=a-ant;
                ant = a;
            }else{
                t+=10;
                ant = a;
            }
        }else{
            if(a<=t){
                if(tRes<10){
                    tRes  = 10;
                }
            }else{
                t +=20;
                ant = a;
            }
        }
    }
    
  }
  cout<<tRes+t;
  return 0;
}
/*3
5 0
7 1
9 0*/

