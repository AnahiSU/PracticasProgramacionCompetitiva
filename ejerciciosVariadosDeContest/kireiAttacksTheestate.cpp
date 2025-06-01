/*
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
      int n; cin>>n;
      vector<int>v(n);
      for(int i = 0; i<n;i++) cin>>v[i];

      vector<vector<int>>g(n);
      for(int i = 0; i<n-1;i++){
         int a,b; cin>>a>>b;a--;b--;
         g[a].push_back(b);
         g[b].push_back(a);
      }
      vector<pair<int,int>> p(n);
      p[0] = {v[0],-v[0]};
      queue<int>cola;
      cola.push(0);
      vector<int>visi(n);
      visi[0] = 1;

      while(!cola.empty()){
         int act = cola.front();
         cola.pop();
         for(int i : g[act]){
            if(!visi[i]){
               p[i].first = max(p[act].second + v[i],v[i]);
               p[i].second = max(p[act].first - v[i],-v[i]);
               visi[i] = 1;
               cola.push(i);
            }
         }
      }
      for(auto i : p){
         cout<<i.first<<' ';
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

