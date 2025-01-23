/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
using namespace std;
#include <bits/stdc++.h>
vector<vector<ll>> floydWarshall(vector<vector<pair<ll,ll>>> g, int n){
    vector<vector<ll>> dis(n,vector<ll>(n,1e18));
    for(int i = 0; i<n; i++){
        dis[i][i] = 0;
    }
    for(int i = 0; i<n; i++){
        for(auto gr : g[i]){
            ll v = gr.first, w= gr.second;
            dis[i][v] = min(dis[i][v],w);
            dis[v][i] = min(dis[v][i],w);
        }
    }
    for(int k = 0; k<n; k++){
        for(int u = 0; u<n; u++){
            for(int v = 0; v<n; v++){
                dis[u][v] = min(dis[u][v], dis[u][k] + dis[k][v]);
            }
        }
    }
    return dis;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int n,m,q; cin>>n>>m>>q;
    vector<vector<pair<ll,ll>>> g(n);
    for(int i = 0; i < m; i++){
        ll a,b,c; cin>>a>>b>>c;
        a--;b--;
        g[a].push_back({b,c});
    }
    vector<vector<ll>> fw = floydWarshall(g,n);

    for(int i = 0; i < q; i++){
        int a,b; cin>>a>>b;
        a--;b--;
        (fw[a][b] == 1e18) ? cout<<-1<<"\n" : cout<<fw[a][b]<<"\n";
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