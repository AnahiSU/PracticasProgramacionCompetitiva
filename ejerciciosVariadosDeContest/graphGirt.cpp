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
#define int long long
#define sz(v) (int)v.size()

using namespace std;

int bfs(int v,vector<vector<int>>&g, vector<int>&dist,vector<int>&parent){
   vector<bool>visi(sz(g));
   queue<int>cola; 
   dist[v] = 0;
   parent[v] = -1;
   cola.push(v);
   visi[v] = 1;
   int maxD = 1e18;
   while(!cola.empty()){
      int act = cola.front();
      cola.pop();
      for(int i : g[act]){
         if(!visi[i]){
            parent[i] = act;
            visi[i] = 1;
            dist[i] = dist[act]+1;
            cola.push(i);
         }else{
            if(i != parent[act]){
               //ciclooo
               maxD = min(maxD, dist[act] + dist[i] + 1);
            }
         }
      }
   }
   return maxD;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>g(n);
   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      g[a].push_back(b);
      g[b].push_back(a);
   }

   int res = 1e18;
   for(int i = 0; i<n;i++){
      vector<int>parent(n),dist(n);
      int bff = bfs(i, g,dist,parent);
      res = min(res,bff);
   }
   if(res == 1e18) cout<<-1<<endl;
   else cout<<res<<endl;

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

