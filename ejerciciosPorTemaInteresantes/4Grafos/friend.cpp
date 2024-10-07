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
int tam = 0;
vector<bool>visi;
vector<vector<int>> gr;
void dfs(int v){
    tam++;
    visi[v]=true;
    for(int vi : gr[v]){
        if(!visi[vi]){
            dfs(vi);
        }
    }   
}
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    for(int j = 0; j<c; j++){
        gr.clear();
        int n,m; cin>>n>>m;
        gr.resize(n);
        for(int i = 0; i<m; i++){
            int a,b; cin>>a>>b;
            a--; b--;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }

        int maxN = -1;
        visi.assign(n,false);

        for(int i = 0; i<n; i++){
            if(!visi[i]){
                tam = 0;
                dfs(i);
                maxN = max(tam, maxN);
            }
        }
        cout<<maxN<<"\n";
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