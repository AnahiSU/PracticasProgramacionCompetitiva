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

void dfs(vector<bool>&visi,int v,vector<vector<int>>& g, vector<int>& comp){
    if(!visi[v]){
        visi[v] =true;
        comp.push_back(v);
        for(int i : g[v]){
            dfs(visi,i,g, comp);
        }
    }
}
signed main(){
    int n; int m;
    cin>>n>>m;
    vector<vector<int>>g(n);

    for(int i=0; i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool>visi(n);

    int res = 0;
    for(int i = 0; i<n;i++){
        if(!visi[i]){
            vector<int>comp;
            dfs(visi,i,g,comp);
            int k = comp.size();
            int aux = 0;
            for(int j = 0; j<k;j++){
                aux += sz(g[comp[j]]); 
            }
            aux/=2; 
            res += (k*(k-1))/2 - aux;
        }
    }
    cout<<res<<endl;
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

