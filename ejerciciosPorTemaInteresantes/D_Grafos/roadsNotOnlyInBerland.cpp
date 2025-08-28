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

struct unionFind {
   vector<int> p;
   vector<int> tam;
   int mxTam;

   unionFind(int n) : p(n, -1), tam(n, 1), mxTam(1) {}
   int find(int x) {
      if (p[x] == -1) return x;
      return p[x] = find(p[x]);
   }
   bool join(int x, int y) {
      x = find(x), y = find(y);
      if (x == y) return 0;
      p[y] = x;
      tam[x] += tam[y];
      mxTam = max(mxTam, tam[x]);
      return 1;
   }
};

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   unionFind dsu(n);

   vector<pair<int,int>>cyc;
   for(int i = 0; i<n-1;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      if(dsu.find(a) == dsu.find(b)){
         cyc.push_back({a,b});
      }
      dsu.join(a,b);
   }


   vector<int>comp;
   for(int i = 0; i<n;i++){
      if(dsu.find(i) == i) comp.push_back(i);
   }

   int j = 1;
   cout<<sz(comp)-1<<endl;
   for(int i = 0;i<sz(comp)-1;i++){
      cout<<cyc[i].first+1<<' '<<cyc[i].second+1<<' '<<comp[i]+1<<' '<<comp[i+1]+1<<endl;
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

