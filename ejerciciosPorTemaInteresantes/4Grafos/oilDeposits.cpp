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
        if(!a&&!b){
            break;
        }
        
        gr.clear();
        int mat [a][b];
        int cont = -1;
        for(int i = 0; i<a; i++){
            for(int j = 0; j<b;j++){
                char a; cin>>a;
                if(a == '*'){
                    mat[i][j] = -1;
                }else{
                    cont++;
                    mat[i][j] = cont;
                    
                }

            }
        }
        gr.resize(cont+1);
        for(int i = 0; i<a; i++){
            for(int j = 0; j<b;j++){
                if(mat[i][j] != -1){
                    if(i-1 < a &&i-1>=0 && j < b && j>=0 && mat[i-1][j] != -1){
                        gr[mat[i][j]].push_back(mat[i-1][j]);
                    }
                    if(i-1 < a &&i-1>=0 && j+1 < b && j+1>=0 && mat[i-1][j+1] != -1){
                        gr[mat[i][j]].push_back(mat[i-1][j+1]);
                    }
                    if(i < a && i >=0 && j+1 < b && j+1>=0 && mat[i][j+1] != -1){
                        gr[mat[i][j]].push_back(mat[i][j+1]);
                    }
                    if(i+1 < a &&i+1>=0 && j+1 < b && j+1>=0 && mat[i+1][j+1] != -1){
                        gr[mat[i][j]].push_back(mat[i+1][j+1]);
                    }
                    if(i+1 < a &&i+1>=0 && j < b && j>=0 && mat[i+1][j] != -1){
                        gr[mat[i][j]].push_back(mat[i+1][j]);
                    }
                    if(i+1 < a &&i+1>=0 && j-1 < b && j-1>=0 && mat[i+1][j-1] != -1){
                        gr[mat[i][j]].push_back(mat[i+1][j-1]);
                    }
                    if(i < a &&i>=0 && j-1 < b && j-1>=0 && mat[i][j-1] != -1){
                        gr[mat[i][j]].push_back(mat[i][j-1]);
                    }
                    if(i < a && i>=0 && j-1 < b && j-1>=0 && mat[i][j-1] != -1){
                        gr[mat[i][j]].push_back(mat[i][j-1]);
                    }
                    if(i-1 < a &&i-1>=0 && j-1 < b && j-1>=0 && mat[i-1][j-1] != -1){
                        gr[mat[i][j]].push_back(mat[i-1][j-1]);
                    }
                }
            }
        }
        visi.assign(cont+1,false);
        tam = 0;
        for(int i = 0; i<cont+1; i++){
            if(!visi[i]){
                tam++;
                dfs(i);
                
            }
        }
        cout<<tam<<endl;
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