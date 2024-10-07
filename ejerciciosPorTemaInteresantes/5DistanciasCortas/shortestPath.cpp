/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/

typedef long long ll;
#define srt(a) sort(a.begin(), a.end());

#include <bits/stdc++.h>

using namespace std;
vector<ll> dijkstra(vector<vector<pair<ll, ll>>> g, int n, int s){
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
signed main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll>>> g(n);
    for (int i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
    }
    vector<ll> dist = dijkstra(g, n, 0);
    for (int i = 0; i < dist.size(); i++){
        cout << dist[i] << " ";
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