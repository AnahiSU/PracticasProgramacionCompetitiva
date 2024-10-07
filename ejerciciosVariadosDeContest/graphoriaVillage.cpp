/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
vector<vector<ll>> g;
vector<bool> visitados;
ll res = 0, n;
map<ll,ll> mapita;

ll dfs(int v){
    bool noHoja = false;
    ll ans = 1;
    visitados[v] = true;
    for(int u : g[v]){
        if(!visitados[u]){
            noHoja = true;
            ans += dfs(u);
        }
    }
    
    if(!noHoja){
        ll t = 1 * (n - 1);
        res = max(res,  t);
        mapita[t]++;
        return 1;
    } 

    ll t = ans * (n - ans);
    res = max(res,  t);
    mapita[t]++;
    return ans;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    g.resize(n);
    visitados.assign(n,false);
    for(int i = 0; i<n-1;i++){
        ll a,b; cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0);

    cout<<res<< " "<<mapita[res]<<"\n";

  
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