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

void dfs(int v, vector<bool>&visi, vector<vector<int>>&g){
   visi[v] = 1;
   for(int i : g[v]){
      if(!visi[i]){
         dfs(i,visi,g);
      }
   }
}

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
   vector<bool>visi(n);
   dfs(0,visi,g);
   int sum = 0;
   bool flag = 1;
   for(bool i : visi){
      flag&=i;
   }
   if(flag){
      for(auto i : g){
         sum+=sz(i);
      }
      int ars = sum/2;
      if(ars == (n-1)){
         cout<<"yes"<<endl;
      }else{
         cout<<"no"<<endl;
      }
   }else{
      cout<<"no"<<endl;
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

