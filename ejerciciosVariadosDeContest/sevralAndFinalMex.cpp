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
 
int mex(int a, int b){
   int piv = min(a,b);
   int res = 0;
   bool flag = 1;
   while(flag){
      if(res != piv){
         flag = 0;
      }else{
         res++;
      }
   }
   return res;
}
 
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      vector<pair<int,int>>res;
      vector<int>v(n),aux;
      for(int i = 0; i<n; i++) cin>>v[i];
      int restos = 0;
      for(int i = 0; i<n-1;i+=2){
         int mexito = mex(v[i],v[i+1]);
         if(mexito != 0){
            res.push_back({i+1-restos,i+2-restos});
            restos++;
            aux.push_back(mexito);
         }else{
            aux.push_back(v[i]);
            aux.push_back(v[i+1]);
         }
      }

      if(n%2!=0){
         aux.push_back(v[n-1]);
         int l = sz(aux), i = sz(aux)-1; 
         if(aux[sz(aux)-1] == 0){
            do{
               l--;
               i--; 
            }while(!aux[i]); 
            res.push_back({l,sz(aux)});

         }
               }
      cout<<sz(res)+1<<endl;
 
      for(int i = 0; i<sz(res);i++){
         cout<<res[i].first<<" "<<res[i].second<<endl;
      }

      
      cout<<1<<" "<<n-sz(res)<<endl;
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

