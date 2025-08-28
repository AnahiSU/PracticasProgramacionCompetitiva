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
#define sz(v) (int)v.size()

using namespace std;


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m,k; cin>>n>>m>>k;
   //guarda el ultimo muelle donde se registro la carta c
   vector<int>muel(m, -1);
   //costo de cada carta
   vector<int>cost(m);

   vector<bool> pressed(m);
   while(k--){
      int mu,c; cin>>mu>>c;
      mu--;c--;
      pressed[c] = 1;
      //ultimo muelle de la carta c es igual al muelle mu
      if(muel[c] == mu){
         cost[c]+=100;
         muel[c] = -1;
      }else if(muel[c] == -1){
         //no se registro aun algun muelle para c
         muel[c] = mu;
      }else{
         //el ultimo muelle de c es distinto a mu
         cost[c] += abs(muel[c]-mu);
         muel[c] = -1;
      }
   }
   for(int i = 0; i<m;i++){
      if(muel[i] != -1){
         if(pressed[i]) cost[i]+=100;
         else cost[i] = 0;
      }
   }
   for(int i = 0; i<m;i++){
      if(i==m-1){
         cout<<cost[i]<<endl;
      }else{
         cout<<cost[i]<<' ';
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

