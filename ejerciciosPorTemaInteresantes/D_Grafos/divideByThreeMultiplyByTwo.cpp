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

void dfs(int v, set<int>&visi, vector<int>&comp,map<int,set<int>>&g){
   visi.insert(v);
   comp.push_back(v);
   for(int i : g[v]){
      if(visi.find(i) == visi.end()){
         dfs(i,visi,comp,g);
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   set<int>ls;
   for(int i = 0; i<n;i++){
      int x; cin>>x;
      ls.insert(x);
   }
   map<int,set<int>>g;
   for(int i : ls){
      if(ls.find(i*2) != ls.end()){
         g[i].insert((i*2));
         g[(i*2)].insert(i);
      }
      if(i%3==0){
         int res = i/3;
         if(ls.find(res) != ls.end()){
            g[i].insert(res);
            g[res].insert(i);

         }
      }
   }

   int start = 0;
   for(auto i : g){
      if(sz(i.second) == 1){
         start = i.first;
      }
   }
   vector<int>comp;
   set<int> visi;
   dfs(start,visi,comp,g);
   bool flag = 1;
   for(int i = 0; i<n-1;i++){
      if(comp[i] * 2 == comp[i+1] || comp[i]/3 == comp[i+1]) continue;
      flag = 0;
   }
   if(flag){
      for(int i : comp){
         cout<<i<<' ';
      } 
   }else{
      reverse(comp.begin(), comp.end());
      for(int i : comp){
         cout<<i<<' ';
      }
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

