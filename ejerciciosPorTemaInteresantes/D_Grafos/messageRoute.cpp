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

void bfs(int v, vector<vector<int>>&g, vector<int>&dist, vector<int>&parents){
   vector<int>visi(sz(g));
   visi[v] = 1;
   dist[v] = 0;
   parents[v] = -1;
   queue<int>cola;
   cola.push(v);
   while(!cola.empty()){
      int act = cola.front();
      cola.pop();
      for(int i : g[act]){
         if(!visi[i]){
            cola.push(i);
            parents[i] = act;
            dist[i] = dist[act] + 1;
            visi[i] = 1;
         }
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>g(n);
   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;a--;b--;
      g[a].push_back(b);
      g[b].push_back(a);
   }

   vector<int>dist(n,-1), parents(n,-1);
   bfs(0,g,dist,parents);
   vector<int>path;
   
   if(dist[n-1] == -1){
      cout<<"IMPOSSIBLE"<<endl;
   }else{
      int actN = n-1;
      
      while(parents[actN] != -1){
         path.push_back(actN);
         actN = parents[actN];
      }
      path.push_back(0);
      cout<<sz(path)<<endl;

   }

   reverse(path.begin(),path.end());
  
   for(int i : path){
      cout<<i+1<<' ';
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

