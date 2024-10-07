/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    vector<int> v(4);
    while(c--){
      int a,b,c,d; cin>>a>>b>>c>>d;
      int dif1 = abs(a-b), dif2 = abs(c-d);
      if(dif2 < dif1){
        //puede que c y d sean una intersección
        if(a <= c){
          if(b<=d){
            cout<<dif2+2<<endl;
          }else{
            cout<<dif2<<endl;
          }
        }else{
          cout<<1<<endl;
        }
      }else{
        if(dif1<dif2){
          if(c<=a){
            if(d<=b) cout<<dif1+2<<endl;
            else cout<<dif1<<endl;
          }else{
            cout<<1<<endl;
          }
        }else{
          if(a == c && b == d){
            cout<<dif1<<endl;
          }else{
            cout<<1<<endl;
          }
        }
      }
      

    }
  
  return 0;
}

//                   :-==-.                     .:..                   
//                .+%@@@@@@#-                -*%@@@@#+.                            
//              .%@@@@@@@@@@%*=--:.....::--+#@@@@@@@@@@@=              
//              +@@@@@@@%*-.                 .-*%@@@@@@@%              
//              +@@@@@%=.                       .=%@@@@@@.             
//              -@@@@*.                           .+@@@@%              
//               +@@+    ..                         =@@%:              
//                -*  :*%@@@*.             :+#%#+.   +#:               
//                =. =@@@*=+@%            :%@##@@@+  .+                
//                + -@@@@.  #@:  :-----   *@=  +@@@+  +                
//               .+ #@@@@#+*@%.  *@@@@%.  +@#:-#@@@@: =.               
//               .=  @@@@@@@@+    .=*:     :@@@@@@@@= -:                             
//                + :**%@%*:     .-=+--     :#@@%**+  +                
//                +.---:.                     .----- .=                                
//                 :=                               +.                 
//                    :=-.                     .-=:                                         
//                           .:-----------:.   