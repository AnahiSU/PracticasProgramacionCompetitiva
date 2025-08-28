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
         v.push_back(i);
         int other = n / i;
         if (other != i) {
            v.push_back(other);
         }
      }
   }
   return v;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int l,w,k; cin>>l>>w>>k;
   if(l*w % k == 0){

      int n =1,m=1;
      int ind = (l*w)/k;
      vector<int>divL = find_divisors(l);
      vector<int>divW = find_divisors(w);

      for(int i = 0; i<sz(divL);i++){
         for(int j = 0; j<sz(divW);j++){
            if(divL[i]*divW[j] == ind){
               n = divL[i];
               m = divW[j];
               break;
            }
         }
      }
      
      vector<vector<char>> mat(l,vector<char>(w));
      char let = 'A';
      for(int i =0; i<l;i+=n){
         for(int j = 0; j<w;j+=m){
            for(int k = i;k<i+n && k<l;k++){
               for(int h = j; h<j+m && h<w;h++){
                  mat[k][h] = let;
               }
            }
            let++;
         }
      }
      for(auto i : mat){
         for(char j : i){
            cout<<j;
         }
         cout<<endl;
      }
   }else{
      cout<<"IMPOSSIBLE"<<endl;
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

