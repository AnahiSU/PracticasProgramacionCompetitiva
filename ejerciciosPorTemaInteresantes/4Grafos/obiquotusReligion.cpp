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
int tam = 0, cont = 0;
vector<bool>visi;
vector<vector<int>> gr;
void dfs(int v){
    visi[v]=true;
    for(int vi : gr[v]){
        if(!visi[vi]){
            dfs(vi);
        }
    }   
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int a,b;
    while(cin>>a>>b){
        if(!a && !b){
            break;
        }
        cont++;
        gr.clear();
        gr.resize(a);
        for(int i = 0; i<b; i++){
            int n,m; cin>>n>>m;
            n--; m--;
            gr[n].push_back(m);
            gr[m].push_back(n);
        }

        
        
        visi.assign(a,false);
        tam = 0;
        for(int i = 0; i<a; i++){
            if(!visi[i]){
                tam++;
                dfs(i);
                
            }
        }

        cout<<"Case "<<cont<<": "<<tam<<"\n";
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