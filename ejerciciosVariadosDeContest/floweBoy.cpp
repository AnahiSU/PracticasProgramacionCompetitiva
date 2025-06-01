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
      int n,m; cin>>n>>m;
      vector<int>a(n),b(m);
      for(int i = 0 ; i<n;i++){
         cin>>a[i];
      }
      for(int i = 0 ; i<m; i++){
         cin>>b[i];
      }
      
      vector<int>f(m), r(m);
      int j = 0;
      for(int i = 0 ; i<m; i++){
         while(j<n && a[j] < b[i]) j++;
         f[i] = j;
         j++; 
      }
      j = n-1;
      for(int i = m-1;i>=0; i--){
         while(j>=0 && a[j]<b[i]) j--;
         r[i] = j;
         j--;
      }

      if(f[m-1] < n){
         cout<<0<<endl;
         continue;
      }
      int res= 1e9+6;
      for(int i = 0 ; i<m;i++){
         int ant = (i == 0) ? -1 : f[i-1];
         int sig = (i == m-1) ? n : r[i+1];
         if(ant < sig){
            res = min(res,b[i]);
         }
      }
      if(res != 1e9+6) cout<<res<<endl;
      else cout<<-1<<endl;

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

