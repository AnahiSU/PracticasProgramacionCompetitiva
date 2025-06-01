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
   int n,m; cin>>n>>m;
   vector<vector<int>>g(n);
   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      g[a].push_back(b);
      g[b].push_back(a);
   }

   queue<int>cola;
   vector<int>dist(n);
   vector<bool>visi(n);
  
   bool flag = 1;
   vector<int>teams(n), parents(n);
      for(int i = 0; i<n;i++){
      if(!visi[i]){
         visi[i] = 1;
         cola.push(i);
         dist[i] = 0;
         teams[i] =1;
         
         while(!cola.empty()){
            int act = cola.front();
            cola.pop();
            for(int i : g[act]){
               if(!visi[i]){
                   visi[i] = 1;
                   parents[i] = act;
                   dist[i] = dist[act]+1;
                   teams[i] = (dist[i] & 1) ? 2 : 1;
                   cola.push(i);

               }else{
                  if(teams[i] == teams[act]){
                     flag = 0;
                     break;
                  }
               }
             }
         }
      }
   }
   if(!flag){
      cout<<"IMPOSSIBLE"<<endl;
   }else{
      for(int i : teams){
         cout<<i<<' ';
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

