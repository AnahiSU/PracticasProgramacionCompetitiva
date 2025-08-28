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

vector<int> dijkstra(vector<vector<pair<int, int>>> g, int n, int s) {
   vector<int> dis(n, 4e18);
   dis[s] = 0;
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
   pq.push({0, s});
   while (!pq.empty()) {
      pair<int, int> menorD = pq.top();
      pq.pop();
      int w = menorD.first;
      int nodo = menorD.second;
      if (dis[nodo] < w) continue;

      for (auto n : g[nodo]) {
         int v = n.first;
         int cost = n.second;
         if (dis[nodo] + cost < dis[v]) {
            dis[v] = dis[nodo] + cost;
            pq.push({dis[v], v});
         }
      }
   }
   return dis;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<pair<int,int>>>g(n);
   for(int i = 0; i<m;i++){
      int a,b,c; cin>>a>>b>>c;
      a--;b--;
      g[a].push_back({b,c});

   }

   vector<int>dijs = dijkstra(g,n,0);
   for(int i : dijs){
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

