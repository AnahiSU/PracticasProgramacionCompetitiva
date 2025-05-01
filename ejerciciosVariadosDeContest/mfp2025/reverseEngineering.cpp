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
int n,m;


bool valid(int x, int y){
   return (x<n && x>=0 && y<m && y>=0);
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   cin>>n>>m;
   vector<vector<int>>v(n,vector<int>(m));
   for(int i = 0 ;i<n; i++){
      for(int j = 0; j<m; j++){
         cin>>v[i][j];
      }
   }
   vector<int>posX = {-1,0,1,0};
   vector<int>posY = {0,1,0,-1};
   for(int i = 0 ; i<n; i++){
      for(int j = 0; j<m ;j++){
         for(int k = 0; k<4;k++){
            if(valid(i+posX[k], j+posY[k])){
               if(v[i+posX[k]][j+posY[k]] == v[i][j]){
                   v[i][j]++;
                   for(int l = 0; l<4; l++){
                     if(v[i+posX[l]][j+posY[l]] == v[i][j]){
                        v[i][j]--; break;
                     }
                  }  
               }
                
            }
         }
      }
   }

   for(int i = 0; i<n; i++){
      for(int j = 0; j<m;j++){
         cout<<v[i][j]<<' ';
      }
      cout<<endl;
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

