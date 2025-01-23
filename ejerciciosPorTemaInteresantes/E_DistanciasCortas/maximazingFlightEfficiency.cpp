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

//lo estamos mandando por los momos, no hemos dormido y estamos divagando
//send help
//dijsktra para todos!!!!!!!!!
//si da accepted me retiro de la programacion competitiva
//wiwi
using namespace std;
ll n; 
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

vector<vector<pair<ll,ll>>> dameElGraf(auto& mat){
	vector<vector<pair<ll,ll>>> g(n);
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			if(i == j) continue;
			if(mat[i][j] == 0) continue;
			g[i].push_back({j,mat[i][j]});
		}
	}
	return g;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	vector<vector<ll>> mat(n,vector<ll>(n,0));

	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			ll w; cin>>w;
			mat[i][j] = w;
		}
	}
	int cont = 0;
	vector<vector<pair<ll,ll>>>g = dameElGraf(mat);
	for(int i = 0; i<n-1;i++){
		for(int j = i+1; j<n;j++){
			g[i].clear();
			for(int u = 0; u<n;u++){
				if(u==j) continue;
				if(mat[i][u]==0) continue;
				g[i].push_back({u,mat[i][u]});
			}

			g[j].clear();
			for(int u = 0; u<n;u++){
				if(u==i) continue;
				if(mat[j][u] == 0) continue;
				g[j].push_back({u,mat[j][u]});
			}

			vector<ll>dist = dijkstra(g,n,i);

			if(mat[i][j] > dist[j]){
				cout<<"-1"<<endl;
				return 0;
			}
			if(mat[i][j] == dist[j]){
				cont++;
			}
			g[i].push_back({j,mat[i][j]});
			g[j].push_back({i,mat[j][i]});

		}
	}
	cout<<cont<<endl;

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

