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

void dfs(set<int>&ls, int v, vector<vector<int>>&g, vector<bool>&visi){
   if(!visi[v]){
      visi[v] = 1;
      ls.insert(v);
      for(int i : g[v]){
         dfs(ls,i,g,visi);
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>v(n);
   for(int i = 0 ; i<m;i++){
      int a,b;cin>>a>>b;
      a--;b--;
      v[a].push_back(b);
      v[b].push_back(a);
   }
   int comp =0;
   vector<bool>visi(n);
   int res1 = 0, res2 = 0;
   for(int i = 0 ; i<n; i++){
      if(!visi[i]){
         set<int>ls;
         dfs(ls,i,v,visi);
         int totCam = 0;
         for(int k : ls){
            totCam += v[k].size();
         }
         totCam/=2;
         if(totCam >= sz(ls)-1){
            res1 += totCam - (sz(ls)-1);
         }else{
            res2 += (sz(ls)-1) - totCam;
         }
         comp++;
      }
   }

   res2 += comp-1;
   if(res1 == 0 && res2 == 0){
      cout<<"BOM"<<endl;
   }else{
      cout<<"RUIM "<<res1 << ' '<<res2<<endl;
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

