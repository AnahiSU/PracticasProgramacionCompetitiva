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
      int n,k; cin>>n>>k;
      vector<int>v(n),vx(n);
      for(int i = 0 ;i <n; i++){
         cin>>v[i];
      }
      int ant = 0, cont = 0;
      bool flag = 1;
      for(int i = 0; i<n; i++){
         cin>>vx[i];
         if(vx[i] != -1){
            cont++;
            ant = vx[i] +v[i];
         }
      }

      for(int i = 0; i<n;i++){
         if(vx[i] == -1){
            if(abs(v[i] - ant) >k || v[i] > ant){
               flag = 0;
            }
         }else{
            if(vx[i] + v[i] != ant){
               flag = 0;
            }
         }
      }

      if(cont){
         (flag) ? cout<<1 : cout<<0;
         cout<<endl;
      }else{
         srt(v);
         cout<<v[0] + k - v[n-1] + 1<<endl;
      }
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

