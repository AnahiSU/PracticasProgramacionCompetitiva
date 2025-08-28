/*
- Siempre de frente.
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
int cont = 0;
void dfs(int v,vector<vector<int>>&g, vector<int>&ls, vector<bool>&visi,vector<int>&res, vector<int>&grupos){
   visi[v] = 1;
   res[v] = cont;
   for(int i : g[v]){
      if(!visi[i]){
         if(ls[grupos[i]] == 0) cont++;
         ls[grupos[i]]++;
         dfs(i,g,ls,visi,res,grupos);
         ls[grupos[i]]--;
         if(ls[grupos[i]] == 0) cont--;
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<vector<int>>g(n+1);
   vector<int>grupos(n+1);
   int sup = 0;
   for(int i = 0; i<n;i++){
      int x; cin>>x;
      if(x) g[x].push_back(i+1);
      else sup = i+1;
   }
   for(int i = 0; i<n;i++) cin>>grupos[i+1];

   vector<bool>visi(n+1);
   //map<int,int>ls;
   vector<int>ls(1e7+1);
   vector<int>res(n+1);
   res[sup] = 1;
   ls[grupos[sup]]++;
   dfs(sup,g,ls,visi, res, grupos);

   for(int i =0;i <n;i++) cout<<res[i+1]+1<<' ';
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

