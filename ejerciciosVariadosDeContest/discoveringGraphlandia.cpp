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

struct unionFind{
    vector<int> p;
    unionFind(int n) : p(n,-1){}
    int find(int x){
        if(p[x] == -1) return x;
        return p[x] = find(p[x]);
    }

    bool join(int x, int y){
        x = find(x);
        y = find(y);
        if(x==y) return 0;
        p[y]=x;
        return 1;
    }
};

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<pair<int,int>>ener(n);
   for(int i = 0;i<n;i++){
      int x; cin>>x;
      ener[i] = {x,i};
   }
   unionFind us(n);
   vector<vector<int>>v(n); 

   for(int i = 0;i<m;i++){
      int a,b; cin>>a>>b;
      a--;b--;
      v[a].push_back(b);
   }
   sort(ener.rbegin(),ener.rend());
   int tam = n;
   vector<int>parents(n);
   parents[ener[0].second] = -2;
   vector<int>res(n);
   for(int i = 0; i<n;i++){
      if(us.find(ener[i].second) != parents[ener[i].second]){
         res[ener[i].second] = tam;
      }else{
         res[ener[i].second] = 1;
      }
      tam--;
      for(int k : v[ener[i].second]){
         us.join(ener[i].second,k);
         parents[k] = ener[i].second;
      } 

   }
   for(int i : res){
      cout<<i<<endl;
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

