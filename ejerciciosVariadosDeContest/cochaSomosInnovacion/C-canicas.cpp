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
   int n, m; cin>>n>>m;
   vector<int>coaches(n);
   vector<int>rond(n);
   vector<int>res(m);
   vector<pair<int,int>> ec;
   //lectura de rondas
   for(int i = 0; i<n;i++){
      int a; cin>>a;
      a--;
      res[a]++;
      rond[i] = a;
   }

   int sup = 0;
   //lectura de supervisores
   for(int i = 0; i<n;i++){
      cin>>coaches[i];
      if(coaches[i]==0){
         sup = i;
      }
      coaches[i]--;
      //par evento ronda
      ec.push_back({rond[i],coaches[i]});
   }

   srt(ec);

   vector<int>visi(m);

   for(int i = 0; i<n-1;i++){
      if(sup == i) continue;
      if(ec[i].first == ec[i+1].first){
         if(ec[i].second != ec[i+1].second){
            res[ec[i].first]++;
         }
      }else{
         res[ec[i].first]++;
      }
      if(ec[i].second == 0){
         visi[ec[i].first] = 1;
      }
   }
   res[ec[sz(ec)-1].first]++;

   if(ec[sup].first == 0){
      visi[ec[sup].first] = 1;
   }

   for(int i = 0; i<m;i++){
      if(!visi[i]){
         res[i]++;
      }
   }

   for(int i : res){
      cout<<i<<' ';
   }

   cout<<endl;

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

