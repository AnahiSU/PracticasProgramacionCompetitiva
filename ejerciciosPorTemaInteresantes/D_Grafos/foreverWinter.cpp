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


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n,m; cin>>n>>m;
      vector<vector<int>>g(n);
      for(int i = 0; i<m;i++){
         int a,b; cin>>a>>b;
         a--;b--;
         g[a].push_back(b);
         g[b].push_back(a);
      }
      int cent = 0;
      for(int i = 0; i<n;i++){
         bool found = 1;
         int cont = 0;
         if(sz(g[i]) == 1) continue;
         for(int j : g[i]){
            if(sz(g[j]) > 1){
               cont++;
            }
         }
         if(cont==sz(g[i])){
            cent = i;
            break;
         }
      }

      int x = g[cent].size();
      int aux = g[cent].back();
      int y = sz(g[aux])-1;
      cout<<x<<' '<<y<<endl;

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

