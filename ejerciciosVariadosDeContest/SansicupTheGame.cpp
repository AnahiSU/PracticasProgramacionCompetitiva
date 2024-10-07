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
vector<vector<int>> gr;
vector<int> contar;
vector<bool> visi;
bool flag = true;
int cont = 0;

void dfs(int v){
    visi[v]=true;
    
    bool esHoja = true;
    for(int vi : gr[v]){
        if(!visi[vi]){
            esHoja = false;
            cont++;
            dfs(vi);
            cont--;
        }
    } 

    if(esHoja){
        if(cont % 2 != 0){
            flag = false;
        }
        contar.push_back(cont);
    }
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int x; cin>>x; 
    while(x--){
        int c; cin>>c;
        cont = 0;
        gr.clear();
        gr.assign(c, vector<int> (c));
        contar.clear();
        visi.assign(c, false);
        flag = true;

        for(int i = 0; i<c-1; i++){
            int a, b; cin>>a>>b;
            a--;b--;
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
        dfs(0);

        (flag) ? cout<<'O'<<"\n" : cout<<'F'<<"\n";
       
        
        
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