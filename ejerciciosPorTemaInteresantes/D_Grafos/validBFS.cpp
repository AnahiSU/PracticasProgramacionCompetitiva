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

void bfs(int v, vector<bool>&visi, vector<int>&comp, vector<set<int>>&g){
   queue<int>cola;
   cola.push(v);
   visi[v] =1;
   comp.push_back(v);
   while(!cola.empty()){
      int act = cola.front();
      cola.pop();
      for(int i : g[act]){
         
         if(!visi[i]){
            visi[i] =1;
            cola.push(i);
            comp.push_back(i);
         }
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<set<int>>g(n);
   for(int i = 0; i<n-1;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      g[a].insert(b);
      g[b].insert(a);
   }
   vector<int>v(n);
   int i = 0, j=1;
   for(int i = 0; i<n;i++) cin>>v[i];
   vector<set<int>>copy(n);
   while(i<n && j<n){
      int k = sz(g[v[i]-1])-sz(copy[v[i]-1]);
      while(k-- && j<n){
         copy[v[i]-1].insert(v[j]-1);
         copy[v[j]-1].insert(v[i]-1);
         j++;
      }
      i++;
   }
   /*
   for(int i = 0; i<n;i++){
      cout<<i<<"-> ";
      for(int j : g[i]){
         cout<<j<<' ';
      }
      cout<<endl;
   }
   for(int i = 0; i<n;i++){
      cout<<i<<"-> ";
      for(int j : copy[i]){
         cout<<j<<' ';
      }
      cout<<endl;
   }*/
   vector<bool>visi(n);
   vector<int>comp;
   bfs(0,visi,comp,g);
   visi.assign(n,false);
   vector<int>comp2;
   bfs(0,visi,comp2,copy);
   bool flag = 1;
   for(int i = 0; i<n;i++){
      if(comp[i] != comp2[i]){
         flag = 0;
         break;
      }
   }

   if(flag && v[0] == 1) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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

