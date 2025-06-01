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

void dfs(int &v, vector<bool>&visi,vector<vector<int>>&g, int&last){
   if(!visi[v]){
      visi[v] = 1;
      for(int u : g[v]){
         dfs(u,visi,g,last);
      }
   }else{
      last = v;
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<vector<int>>g(n);
   for(int i = 0;i<n;i++){
      int a; cin>>a; a--;
      g[i].push_back(a);
   }

   for(int i = 0; i<n;i++){
      vector<bool>visi(n);
      int last = i;
      dfs(i,visi,g,last);
      cout<<last+1<<' ';
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

