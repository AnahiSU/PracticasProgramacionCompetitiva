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
int kruskal(vector<pair<int,pair<int,int>>> ed, int n){
    //n es nro de vertices
    srt(ed);
    unionFind dsu(n);
    int cntAristas = 0;
    int res = 0;
    for(auto e: ed){
        int peso = e.first;
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
   int n,m; cin>>n>>m;
   vector<pair<int,pair<int,int>>>g;
   for(int i =0; i<m;i++){
      int a,b,c; cin>>a>>b>>c;
      a--;b--;
      g.push_back({c,{a,b}});
   }
   int res = kruskal(g,n);
   if(res !=-1) cout<<res<<endl;
   else cout<<"IMPOSSIBLE"<<endl;
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

