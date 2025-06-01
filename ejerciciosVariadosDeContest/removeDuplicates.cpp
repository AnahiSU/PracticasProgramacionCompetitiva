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
   vector<int>v(n);
   vector<bool>visi(1e5);
   for(int i = 0; i<n;i++) cin>>v[i];
   reverse(v.begin(),v.end());
   vector<int>res;
   for(int i = 0; i<n;i++){
      if(!visi[v[i]]) res.push_back(v[i]);
      visi[v[i]] = 1;
   }
   reverse(res.begin(),res.end());
   cout<<sz(res)<<endl;
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

