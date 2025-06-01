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

vector<vector<int>> dir={{0,0,1,-1},{1,-1,0,0}};

int floodFill(vector<vector<char>> &maze, vector<vector<bool>> &visitados, int i, int j, int n, int m, vector<pair<int,int>> &posiciones){
    if(i<0 || i>=n || j<0 || j>=m || visitados[i][j]==true || maze[i][j]=='#'){
        return 0;
    }
    visitados[i][j]=true;
    int area=1;
    posiciones.push_back({i,j});   
    for(int k=0;k<4;k++){
        area+=floodFill(maze,visitados,i+dir[0][k],j+dir[1][k],n,m,posiciones);
    }
    return area;
}
 
int bfs(map<int,vector<int>> &mapa, int nodo){
    deque<pair<int,int>> cola;
    int maximo=-1;
    cola.push_back({nodo,0});
    set<int> visitados4;
    while(!cola.empty()){
        auto frente=cola.front();
        cola.pop_front();
        int i=frente.first;
        if(maximo<frente.second){
            maximo=frente.second;

        }
        for(int vecino:mapa[i]){
            if(visitados4.find(vecino)==visitados4.end()){
                cola.push_back({vecino,frente.second+1});
                visitados4.insert(vecino);
            }
        }
    }
    return maximo;

}




signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   int test;
   cin>>test;
   for(int i=-0;i<test;i++){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> maze(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>maze[i][j];
            }
        }
        vector<vector<bool>> visitados(n,vector<bool>(m,false));
        vector<pair<int,int>> listaPares;
        int mayorArea=-1;
        int con5tAreas=0;
        vector<pair<int,int>> posiciones3;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char elemento=maze[i][j];
                if(elemento=='.' && visitados[i][j]==false){
                    listaPares.push_back({i,j});
                    vector<pair<int,int>> posiciones;
                    int area=floodFill(maze,visitados,i,j,n,m,posiciones);
                    if(area>mayorArea){
                        mayorArea=area;
                        posiciones3.clear();
                        for(auto e:posiciones){
                            posiciones3.push_back(e);
                        }
                    }
                    con5tAreas++;
                }
            }
        }
        map<int,vector<int>> mapa;
        int nodo=0;
        set<int> nodos;
        for(auto par:posiciones3){
            int i=par.first;
            int j=par.second;
            mapa[i].push_back(j);
            mapa[j].push_back(i);
            nodos.insert(i);
            nodos.insert(j);
        }
        int maximo=0;
        for(int nodo:nodos){
            maximo=max(bfs(mapa,nodo),maximo);
        }
        cout<<con5tAreas<<" "<<mayorArea<<" "<<maximo<<endl;
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

