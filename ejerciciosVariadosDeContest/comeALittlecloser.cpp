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
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      vector<pair<int,int>>v(n);
      multiset<int> mulX;
      multiset<int> mulY;
      for(int i = 0; i<n;i++){
         cin>>v[i].first>>v[i].second;
         mulX.insert(v[i].first);
         mulY.insert(v[i].second);
      }
      if(n==1){
         cout<<1<<endl;
         continue;
      }
      int res = 1e18;
      for(int i = 0; i<n;i++){
         int x = v[i].first;
         int y = v[i].second;
         mulX.erase(mulX.find(x));
         mulY.erase(mulY.find(y));
         int minX = *mulX.begin();
         int minY = *mulY.begin();
         int maxX = *mulX.rbegin();
         int maxY = *mulY.rbegin();

         int ar = ((maxX - minX)+1) * ((maxY-minY)+1);
         if(ar == n-1){
            res = min(ar + min((maxX-minX+1),(maxY-minY+1)),res);
         }else{
            res = min(ar,res);
         }
         mulX.insert(x);
         mulY.insert(y);
      }
      cout<<res<<endl;
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

