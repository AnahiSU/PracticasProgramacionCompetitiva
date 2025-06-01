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
   vector<int>v(n);
   queue<int>cola;
   map<int,int> dist;
   set<int>visi;

   for(int i = 0; i<n;i++){
      int a; cin>>a;
      dist[a] = 0;
      cola.push(a);
      visi.insert(a);
   }
   vector<int>res;
   int distR = 0;
   while(!cola.empty()){
      if(sz(res) == m) break;
      int act = cola.front();
      cola.pop();
      visi.insert(act);
      if(dist[act] != 0){
         distR+=dist[act];
         res.push_back(act);
      }   
      if(visi.find(act-1) == visi.end()){
         cola.push(act-1);
         dist[act-1] = dist[act]+1;
         visi.insert(act-1);
      }
      if(visi.find(act+1) == visi.end()){
         cola.push(act+1);
         dist[act+1] = dist[act]+1;
         visi.insert(act+1);
      }
   }
   cout<<distR<<endl;
   for(int i : res){
      cout<<i<<' ';
   }
   cout<<endl;
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

