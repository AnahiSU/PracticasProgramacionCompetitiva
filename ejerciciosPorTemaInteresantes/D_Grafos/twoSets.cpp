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
   int n,a,b; cin>>n>>a>>b;
   vector<int>v(n);
   set<int>ls;
   map<int,int>pos;
   for(int i = 0; i<n;i++){
      cin>>v[i];
      pos[v[i]] = i;
      ls.insert(v[i]);
   }

   unionFind dsu(n+2);

   int alt = 0;
   vector<int>altV;
   vector<bool>visi(n);
   for(int i = 0; i<n;i++){
      if(ls.find(a-v[i])!=ls.end() && !visi[pos[a-v[i]]]){
         
         dsu.join(0,pos[v[i]]+2);
         dsu.join(0,pos[a-v[i]]+2);
         visi[pos[a-v[i]]] = 1;
         visi[pos[v[i]]] = 1;

      }else if(ls.find(b-v[i]) != ls.end() && !visi[pos[b-v[i]]]){
         dsu.join(1,pos[v[i]]+2);
         dsu.join(1,pos[b-v[i]]+2);
         visi[pos[b-v[i]]] = 1;
         visi[pos[v[i]]] = 1;

         //cout<<"hola"<<' '<<dsu.find(pos[v[i]]+2)<<endl;
      }
   }
   set<int>comp;
   vector<int>conj(n);
   for(int i = 0; i<n;i++){
      int a = dsu.find(pos[v[i]]+2);
      if(a==1 || a==0)comp.insert(a);
      conj[i] = a;
   }

   if(sz(comp) > 2){
      cout<<"NO"<<endl;
   }else{
      bool flag = 1;
      for(int i : conj){
         flag = (i ==0 || i==1) ? 1:0;
      }
      if(!flag){
         cout<<"NO"<<endl;
         return 0;
      }
      cout<<"YES"<<endl;
      for(int i : conj){
         cout<<i<<' ';
      }
      cout<<endl;
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

