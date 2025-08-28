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
#define ll long long
#define sz(v) (int)v.size()

using namespace std;


signed main (){
   ll n,tam;
   cin>>n>>tam;
   vector<vector<ll>> matriz(n,vector<ll>(n));
   for(ll i=0;i<n;i++){
      for(ll j=0;j<n;j++){
         cin>>matriz[i][j];
      }
   }
   ll areas=0;
   for(ll i=0;i<n;i++){
      for(ll j=0;j<n;j++){
         ll limite1=i+tam-1;
         ll limite2=j+tam-1;
         if((limite1<n) && (limite2<n)){
            if((matriz[i+tam-1][j+tam-1]==matriz[i][j]) && (matriz[i+tam-1][j+tam-1]==matriz[i+tam-1][j]) && (matriz[i+tam-1][j+tam-1]==matriz[i][j+tam-1])){ 
               areas++;
            }
         }
         
      }
   }
   cout<<areas;
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

