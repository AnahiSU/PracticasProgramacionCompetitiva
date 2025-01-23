/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;

int find_divisors(int n) {
   int cont = 0;
   int sroot = sqrt(n);
   for (int i = 1; i <= sroot; i++) {
      if (n % i == 0) {
         cont+=i;
         int other = n / i;
         if (other != i) { // case i * i = n
            cont+=other;
         }
      }
   }
   return cont;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int n;
    int i = 0;
    while(cin>>n){
        int k = 1;
        int ans = -1;
        if(n){
            int div = find_divisors(k);
            while(k<=1000){
                
                if(div == n){
                    ans = k;
                }
                k++;
                div = find_divisors(k);
            }
            
        }else{
            break;
        }
        i++;
        cout<<"Case "<<i<<": "<<ans<<"\n";

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