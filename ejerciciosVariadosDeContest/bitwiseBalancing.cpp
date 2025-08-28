/*
- Siempre de frente.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end())
#include <bits/stdc++.h>
#define endl "\n"
//#define int long long
#define sz(v) (int)v.size()

using namespace std;


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int b,c,d; cin>>b>>c>>d;
      bitset<64> bsB(b),bsC(c),bsD(d);
      bitset<64> res;
      bool flag = 1;
      for(int i = 0; i<62;i++){
         if(bsB[i] == 0 && bsC[i] == 0){
            res[i] = bsD[i];
         }else if(bsB[i] == 0 && bsC[i] == 1){
            if(bsD[i]==1){
               flag = 0;
               cout<<-1<<endl;
               break;
            }else{
               res[i] = 0;
            }
         }else if (bsB[i] == 1 && bsC[i] == 0){
            if(bsD[i] == 0){
               flag = 0;
               cout<<-1<<endl;
               break;
            }else{
               res[i] = 0;
            }
         }else if(bsB[i] == 1 && bsC[i] == 1){
            res[i] = 1-bsD[i];
         }
      }
      int a = (int)res.to_ulong();

      if((a|b) - (a&c) != d && flag){
         cout<<-1<<endl;
         flag = 0;
      } 
      if(flag) cout<<(int)res.to_ullong()<<endl;;
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

