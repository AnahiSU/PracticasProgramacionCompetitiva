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

bool cmp(pair<int,int>a,pair<int,int>b){
   return (abs(a.first) < abs(b.first));
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n,k; cin>>n>>k;
      vector<int>a(n),x(n);
      for(int i = 0; i<n;i++) cin>>a[i];
      for(int i = 0; i<n;i++) cin>>x[i];

      vector<pair<int,int>>v(n);
      for(int i = 0;i<n;i++) v[i] = {x[i],a[i]};
      sort(v.begin(),v.end(),cmp);

      int cont = 0, mons = 0;
      bool flag = 1;
      int i=0;
      while(i<n){
         bool sig = 1;
         if(mons + v[i].second <= k){
            mons+=v[i].second;
         }else{
            cont++;
            v[i].second -= (k-mons);
            sig = 0;
            mons = 0;
         }

         if(v[i].first > 0){
            if(v[i].first-cont <=0){
               flag = 0;
               break;
            }
         }else{
            if(cont + v[i].first >= 0){
               flag = 0;
               break;
            }
         } 
         if(sig) i++;
      
      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

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

