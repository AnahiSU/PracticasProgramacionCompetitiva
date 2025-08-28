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
   vector<int>dist(n-1);
   for(int i = 0; i<n-1;i++) cin>>dist[i];
   vector<int>est(n);
   for(int i = 0; i<n;i++) cin>>est[i];

   vector<int>v1(n),v2(n);
   v1[0] = 0;
   v2[0] = 0;
   for(int i = 1; i<n;i++){
      v1[i] = v1[i-1] + est[i-1] + dist[i-1];
   }
   reverse(dist.begin(),dist.end());
   reverse(est.begin(),est.end());
   for(int i = 1; i<n;i++){
      v2[i] = v2[i-1] + est[i-1] + dist[i-1];
   }
   reverse(v2.begin(),v2.end());
   reverse(est.begin(),est.end());
   int res = 0;
   for(int i = 0; i<n;i++){
      if(abs(v1[i]-v2[i]) <= est[i]){
         res=abs(max(v2[i],v1[i])-(min(v1[i],v2[i]) + est[i])); 
      }
   }

   cout<<res<<endl;

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

