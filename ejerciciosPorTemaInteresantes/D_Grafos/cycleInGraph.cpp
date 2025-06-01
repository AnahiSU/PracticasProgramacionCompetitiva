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
vector<int>res;
void dfs(int v,vector<vector<int>>&g,vector<bool>&visi){
   visi[v] = 1;
   res.push_back(v);
   for(int i : g[v]){
      if(!visi[i]){
         dfs(i,g,visi);
      }
   }
}
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m,k; cin>>n>>m>>k;
   vector<vector<int>>v(n);
   for(int i = 0; i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      v[a].push_back(b);
      v[b].push_back(a);
   }
   vector<bool>visi(n);
   for(int i = 0; i<n;i++){
       if(!visi[i]) dfs(i,v,visi);
   }
    
   int ind = -1;
   for(int i= 0; i<sz(res);i++){
      int x = res[i];
      for(int j = 0; j<sz(v[x]);j++){
         if(v[x][j] == res[n-1]){
            ind = i;
            break;
         }
      }
      if(ind != -1){
            break;
      }
   }

   cout<<n-ind<<endl; 
   for(int i = ind ;i<sz(res);i++){
      cout<<res[i]+1<<' ';
   }
   cout<<endl;
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

