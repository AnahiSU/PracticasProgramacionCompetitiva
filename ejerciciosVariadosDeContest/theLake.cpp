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

int dir[2][4] = {{0, 0, 1,-1},{1,-1, 0, 0}};

int floodfill(vector<vector<bool>>&visi, int x, int y, vector<vector<int>>&tab, int n, int m){
   if(x < 0 || y < 0 || x >= n || y >= m || visi[x][y] ||tab[x][y] == 0) return 0;

   visi[x][y] = 1;
   int ret = tab[x][y];

   for(int i = 0; i<4;i++){
      ret+=floodfill(visi,x+dir[0][i], y+dir[1][i],tab,n,m);
   }
   return ret;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n,m; cin>>n>>m;
      vector<vector<int>> mat(n,vector<int>(m));
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            cin>>mat[i][j];
         }
      }
      int res = 0;
      vector<vector<bool>>visi(n,vector<bool>(m));
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            if(!visi[i][j]){
               res = max(res,floodfill(visi,i,j,mat,n,m));
            }
         }
      }
      cout<<res<<endl;
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

