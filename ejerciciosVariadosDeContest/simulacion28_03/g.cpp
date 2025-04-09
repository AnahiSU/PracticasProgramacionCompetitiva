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


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<int> v(n);
   for(int i = 0; i<n;i++) cin>>v[i];

   reverse(v.begin(), v.end());
   vector<int>dif;
   for(int i = 1; i<n;i++){
      dif.push_back(abs(v[i-1]-v[i]));
   }

   vector<int>g(n);
   for(int i = 0; i<n;i++) cin>>g[i];

   srt(g);

   int prim = 0, sec = 0;
   for(int i = 0; i<n;i++){
      int x = dif[0];
      int l = i-1, r = n-1;
      while(r-l > 1){
         int mid = (l+r)/2;
         if(g[mid] + g[i] > x){
            r = mid;
         }else{
            l = mid;
         }
      }
      if(g[l] + g[i] >= x){
         prim = l;
         sec = i;
         break;
      }
   }

   vector<int>res;
   res.push_back(min(g[prim],g[sec]));
   res.push_back(max(g[sec],g[prim]));

   g[prim] = -1;
   g[sec] = -1;
   srt(g);

   int cont = sz(g);

   for(int i = 1; i<n-2;i++){
      int x = abs(res.back()-dif[i]);
      int l = sz(g)-cont-1,r=n-1;
      while(r-l > 1){
         int mid = (l+r)/2;
         if(g[mid] + res.back() > dif[i]){
            r = mid;
         }else{
            l = mid;
         }
      }
      cont--;
      res.push_back(g[l]);
      g[l] = -1;
      srt(g);
   }
   res.push_back(g[sz(g)-1]);
   reverse(res.begin(),res.end());
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

