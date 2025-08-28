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
      vector<int>v(n);
      for(int i = 0; i<n;i++) cin>>v[i];
      int ant = -1, cont = 0;
      for(int i : v){
         if(i!= ant) cont++;
         ant = i;
      }
      if(cont == 1){
         cout<<0<<endl;
         continue;
      }
      ant = -1; 
      int der=0, ans=4e18;
      for(int i = 0 ;i<n-1;i++){
         if(v[i] != ant && v[i]!= v[i+1]){
            ans = min(ans, (i * v[i]) + (n-i-1)*v[i]);
         }else if(v[i]== ant && v[i]!=v[i+1]){
            ans = min(ans,der + (n-i-1)*v[i]);
            der = 0;
         }else if(v[i]!= ant && v[i] == v[i+1]){
            der = i*v[i];
         }
         ant = v[i];
      }
      if(n>1){
         if(v[n-1] == v[n-2]){
            ans = min(ans,der);

         }else{
            ans = min(ans, (n-1)*v[n-1]);
         }
      }
     
      cout<<ans<<endl;

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

