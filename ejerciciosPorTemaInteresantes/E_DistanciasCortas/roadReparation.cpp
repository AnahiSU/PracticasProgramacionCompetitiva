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

struct unionFind{
    vector<int> p;
    unionFind(int n) : p(n,-1){}
    int find(int x){
        if(p[x] == -1) return x;
        return p[x] = find(p[x]);
    }

    bool join(int x, int y){
        x = find(x);
        y = find(y);
        if(x==y) return 0;
        p[y]=x;
        return 1;
    }
};
ll kruskal(vector<pair<ll,pair<ll,ll>>> ed, int n){
    //n es nro de vertices
    srt(ed);
    unionFind dsu(n);
    int cntAristas = 0;
    ll res = 0;
    for(auto e: ed){
        ll peso = e.first;
        int u = e.second.first;
        int v = e.second.second;
        if(dsu.join(u,v)){
            cntAristas++;
            res+=peso;
        }
        if(cntAristas == n-1){
            return res;
        }
    }
    if(cntAristas < n-1){
        return -1;
    }
    return res;
}
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int m,n; cin>>m>>n;
    vector<pair<ll,pair<ll,ll>>> g;
    for(int i = 0; i<n;i++){
        ll a,b,c; cin>>a>>b>>c;
        a--;b--;
        g.push_back(make_pair(c,make_pair(a,b)));
    }
    ll res = kruskal(g,m);
    (res == -1) ? cout<<"IMPOSSIBLE"<<"\n": cout<<res<<"\n"; 
  
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