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


vector<int> find_divisors(int n) {
   vector<int> v;
   for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
         if(i != 1)v.push_back(i);
         int other = n / i;
         if (other != i) { // case i * i = n
            v.push_back(other);
         }
      }
   }
   return v;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int y,k; cin>>y>>k;
   vector<int> v = find_divisors(y);
   srt(v);

   int x = 1;
   int cont = 1;
   for(int i = 0; i<sz(v) & k>=0;i++){
      int dist = v[i] - x;
      int saltos = dist/cont;
      if(v[i] % cont == 0){
         if(k<=saltos){
            x += k*cont;
            k = 0;
         }else{
            k-=saltos;
            x = v[i];
            cont = v[i];
         }
      }
   } 

   if(k){
      x+=cont*k;
   }
   cout<<x<<endl;
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

