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

void dfs(int &u,vector<bool>&visi,vector<vector<int>>&g, vector<int>&comp){
   visi[u] = 1;
   comp.push_back(u);
   for(int i : g[u]){
      if(!visi[i]){
         dfs(i,visi,g,comp);
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>g(n);
   vector<int>cost(n);
   
   for(int i = 0; i<n;i++) cin>>cost[i];

   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      g[a].push_back(b);
      g[b].push_back(a);
   }
   
   vector<bool>visi(n);
   vector<int>res;
   for(int i = 0; i<n;i++){
      if(!visi[i]){
         vector<int>comp;
         dfs(i,visi,g,comp);
         int mini = 1e9;
         for(int j = 0; j<sz(comp); j++){
            mini = min(mini,cost[comp[j]]);
         }
         res.push_back(mini);
      }
   }
   int resSum = 0;
   for(int i : res){
      resSum += i;
   }
   cout<<resSum<<endl;

   
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

