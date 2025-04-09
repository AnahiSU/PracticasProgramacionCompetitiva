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
  
   for (int i = 1; n >= i*i; i++) {
      if (n % i == 0) {
         v.push_back(i);
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

   int c; cin>>c;
   while(c--){
      int n,k; cin>>n>>k;
      if(k == 1 && n == 1){
         cout<<"NO"<<endl;
      }else if(k == 2 & n == 1){
         cout<<"YES"<<endl;
      }else{
         if(k>1){
            cout<<"NO"<<endl;
         }else{
            vector<int>v = find_divisors(n);
            if(sz(v) > 2){
               cout<<"NO"<<endl;
            }else{
               cout<<"YES"<<endl;
            }
         }
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

