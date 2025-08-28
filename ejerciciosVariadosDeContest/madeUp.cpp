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
   int n; cin>>n;
   vector<int>a(n),b(n),c(n);
   for(int i = 0; i<n;i++) cin>>a[i];
   for(int i = 0; i<n;i++) cin>>b[i];
   for(int i = 0; i<n;i++) cin>>c[i];
   
   vector<int>b2(n);
   for(int i = 0; i<n;i++) b2[i] = b[c[i]-1];

   srt(a);srt(b2);
   vector<int>fra(n),frb(n);
   for(int i = 0; i<n;i++){
      fra[a[i]-1]++;
   }

   for(int i = 0; i<n;i++){
      frb[b2[i]-1]++;
   }

   int res = 0;

   for(int i = 0; i<n;i++){
      res+= fra[i]*frb[i];
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

