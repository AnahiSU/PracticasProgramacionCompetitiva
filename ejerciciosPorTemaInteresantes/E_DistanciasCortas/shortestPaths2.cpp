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

vector<vector<int>> floydWarshall(vector<vector<pair<int, int>>> g, int n) {
   vector<vector<int>> dis(n, vector<int>(n, 1e18));
   for (int i = 0; i < n; i++) {
      dis[i][i] = 0;
   }
   for (int i = 0; i < n; i++) {
      for (auto gr : g[i]) {
         int v = gr.first, w = gr.second;
         dis[i][v] = min(dis[i][v], w);
         dis[v][i] = min(dis[v][i], w);
      }
   }
   for (int k = 0; k < n; k++) {
      for (int u = 0; u < n; u++) {
         for (int v = 0; v < n; v++) {
            dis[u][v] = min(dis[u][v], dis[u][k] + dis[k][v]);
         }
      }
   }
   return dis;
}
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m,q; cin>>n>>m>>q;
   vector<vector<pair<int,int>>>g(n);
   for(int i = 0; i<m;i++){
      int a,b,c; cin>>a>>b>>c;
      a--;b--;
      g[a].push_back({b,c});
   }
   vector<vector<int>>fW = floydWarshall(g,n);
   while(q--){
      int a,b; cin>>a>>b;
      a--;b--;
      int res = fW[a][b] != 1e18 ? fW[a][b] : -1;
      cout<<res<<endl;
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

