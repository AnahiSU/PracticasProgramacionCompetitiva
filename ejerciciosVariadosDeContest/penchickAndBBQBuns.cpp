/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end())
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define sz(v) (int)v.size()

using namespace std;


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      if(n&1){
         int sq = sqrt(n);
         if(n >= 27){
            cout<<1<<' ';
            int cont = 3;
            for(int i = 0; i<4;i++){
               cout<<cont<<' '<<cont<<' ';
               cont++;
            }
            cout<<1<<' '<<2<<' ';
            for(int i = 0; i<7;i++){
               cout<<cont<<' '<<cont<<' ';
               cont++;
            }
            cout<<1<<' '<<2<<' ';
            for(int i = 27;i<n;i+=2){
               cout<<cont<<' '<<cont<<' ';
               cont++;
               
            }
            cout<<endl;

         }else{
            cout<<-1<<endl;   
         }
      }else{
         
         int cont = 1;
         for(int i = 0; i<n/2;i++){
            cout<<cont<<' '<<cont<<' ';
            cont++;
         }
         cout<<endl;
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

