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

bool puedo(int m, int k, vector<int>v){
   int mid = sz(v)/2;
   int cont = m-v[mid];
   if(m<v[mid]){
      return false;
   }else{
      for(int i = mid+1; i<sz(v);i++){
         if(v[i]<m){
            cont+=m-v[i];
         }
      }
      if(cont <= k) return true;
      else return false;
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,k; cin>>n>>k;
   vector<int>v(n);
   for(int i = 0; i<n;i++) cin>>v[i];
   srt(v);
   int l = v[n/2]-1, r = 1e10;
   while(r-l>1){
      int mid = (l+r)/2;
      if(puedo(mid,k,v)){
         l = mid;
      }else{
         r = mid;
      }
   }
   cout<<l<<endl;
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

