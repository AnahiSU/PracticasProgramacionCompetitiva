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


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,q; cin>>n>>q;
   vector<int>v(n);
   int seg = 0;
   while(q--){
      int x; cin>>x;x--;
      v[x] = (v[x] ? 0 : 1);
      if(n==1){
         if(v[x]){
            seg++;
         }else{
            seg--;
         }
         cout<<seg<<endl;
         continue;
      } 
      if(x == 0){
         if(v[x]){
            if(v[x+1] != v[x]) seg++;
         }else{
            if(v[x+1] == v[x]) seg--;
         }
      }else if (x==n-1){
         if(v[x]){
            if(v[x-1] != v[x]) seg++;
         }else{
            if(v[x-1] == v[x]) seg--;
         }
      }else{
         if(v[x]){
            if(v[x-1] != v[x] && v[x+1] != v[x]) seg++;
            else if(v[x-1] == v[x] && v[x+1] == v[x]) seg--;
         }else{
            if(v[x-1] != v[x] && v[x+1] != v[x]) seg++;
            else if(v[x-1] == v[x] && v[x+1] == v[x]) seg--;
         }
      }
      cout<<seg<<endl; 
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

