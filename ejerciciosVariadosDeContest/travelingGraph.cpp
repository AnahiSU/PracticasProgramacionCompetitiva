/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>


using namespace std;
vector<ll> dijkstra(vector<vector<pair<ll, ll>>>&g, int n, int s){
    vector<ll> dis(n, 4e18);
    dis[s] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, s});
    while (!pq.empty()){
        pair<ll, ll> menorD = pq.top();
        pq.pop();
        ll w = menorD.first;
        ll nodo = menorD.second;
        if (dis[nodo] < w)
            continue;

        for (auto n : g[nodo]){
            ll v = n.first;
            ll cost = n.second;
            if (dis[nodo] + cost < dis[v]){
                dis[v] = dis[nodo] + cost;
                pq.push({dis[v], v});
            }
        }
    }
    return dis;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		vector<vector<pair<ll,ll>>>g(n);
		vector<bool>tieneAd(n,0);
		for(int i= 0; i<m;i++){
			ll a,b;cin>>a>>b;
			a--;b--;
			if(abs(a-b)==1)tieneAd[min(a,b)] = 1;
			g[a].push_back({b,0});
			g[b].push_back({a,0});
		}
		for(int i = 0; i<n-1;i++){
			if(!tieneAd[i]){
				g[i].push_back({i+1,1});
				g[i+1].push_back({i,1});
			}
		}
		vector<ll>dist = dijkstra(g,n,0);
		cout<<dist[n-1]<<endl;
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

