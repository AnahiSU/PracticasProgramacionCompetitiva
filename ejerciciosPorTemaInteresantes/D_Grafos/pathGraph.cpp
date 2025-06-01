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
   for(int i = 0;i <m;i++){
      int a,b; cin>>a>>b; a--;b--;
      g[a].push_back(b);
      g[b].push_back(a);
   }
   int ini = 0;
   for(int i = 0; i<n;i++){
      if(sz(g[i]) == 1){
         ini = i;
      }
   }

   vector<bool>visi(n);
   vector<int>ant(n);
   ant[ini] = -1;
   queue<int>cola;
   cola.push(ini);
   visi[ini] =1;
   while(!cola.empty()){
      int u = cola.front();
      cola.pop();
      for(int i : g[u]){
         if(!visi[i]){
            visi[i] =1;
            ant[i] = u;
            cola.push(i);
         }
      }
   }
   if(accumulate(visi.begin(),visi.end(),true)){
      srt(ant);
      bool flag = 1;
      for(int i= 0; i<n-1;i++){
         if(ant[i] == ant[i+1]){
            flag = 0;
         }
      }
      if(flag && m){
         cout<<"Yes"<<endl;
      }else{
         cout<<"No"<<endl;
      }
   }else{
      cout<<"No"<<endl;
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

