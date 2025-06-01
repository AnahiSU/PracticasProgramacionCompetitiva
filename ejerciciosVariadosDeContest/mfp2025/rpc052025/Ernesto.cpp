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
map<string,int>v;
map<string,int>ls;
map<int,string> names;

void dfs(int u, vector<bool>&visi, vector<vector<int>>&g,vector<int>&comp){
   visi[u] = 1;
   comp.push_back(u);
   
   for(int i : g[u]){
      if(!visi[i]){
         dfs(i,visi,g,comp);
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   int caseAS = 1;
   while(c--){
      int n,m; cin>>n>>m;
      int cont =0;
      
      for(int i = 0; i<n;i++){
         string s; cin>>s;
         int x; cin>>x;
         ls[s] =cont;
         names[cont] = s;
         v[s] = x;
         cont++;
      }
      vector<vector<int>>g(n);
      for(int i = 0; i<m;i++){
         string a,b; cin>>a>>b;
         int nodA = ls[a];
         int nodB = ls[b];
         g[nodA].push_back(nodB);
         g[nodB].push_back(nodA);
      }

      vector<bool>visi(n);
      vector<string>res;

      for(int i = 0; i<n;i++){
         if(!visi[i]){
            vector<int>comp;
            int may = -1;
            string mayor = "";
            dfs(i,visi,g,comp);
            for(int j = 0; j<sz(comp);j++){
               if(v[names[comp[j]]] > may){
                  may = v[names[comp[j]]];
                  mayor = names[comp[j]];
               }
            }
            res.push_back(mayor);
         }
      }
      cout<<"Case "<<caseAS<<":"<<endl;
      srt(res);
      for(string s : res){
         cout<<s<<endl;
      }
      ls.clear();v.clear();names.clear();
      caseAS++;
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

