/*
- Siempre de frente.
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

void bfs(vector<vector<int>>&g, vector<int>&dis){
   vector<bool>visi(sz(dis));
   queue<int>col;
   col.push(0);
   visi[0] = 1;
   while(!col.empty()){
      int act = col.front();
      col.pop();
      for(int i : g[act]){
         if(!visi[i]){
            visi[i] = 1;
            dis[i] = dis[act]+1;
            col.push(i);
         }
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>mat(n,vector<int>(n,0)), gR(n), gRa(n);
   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      mat[a][b] = 1;
      mat[b][a] = 1;
      gRa[a].push_back(b);
      gRa[b].push_back(a);
   }

   for(int i = 0; i<n;i++){
      for(int j = 0; j<n;j++){
         if(i==j || mat[i][j] == 1) continue;
         gR[i].push_back(j);
         gR[j].push_back(i);
      }
   }

   vector<int>disRa(n,1e18),disR(n,1e18);
   disRa[0] = 0;
   disR[0] = 0;
   bfs(gRa,disRa);
   bfs(gR,disR);

   if(disRa[n-1] == 1e18 || disR[n-1] == 1e18){
      cout<<-1<<endl;
   }else{
      cout<<max(disRa[n-1],disR[n-1])<<endl;;
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

