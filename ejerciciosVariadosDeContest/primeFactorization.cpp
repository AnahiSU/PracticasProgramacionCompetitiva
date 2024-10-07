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
void primeFactors(int n, vector<int>& primes){ 
 
    while (n % 2 == 0){
        primes.push_back(2); 
        n = n / 2; 
    } 
 
    for (int i = 3; i <= std::sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            primes.push_back(i); 
            n = n / i; 
        } 
    }  
    if (n > 2) 
        primes.push_back(n); 
} 
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    vector<int> primes;
    int n; cin>>n;
    primeFactors(n,primes);
    for(int i = 0; i<primes.size();i++){
        cout<<primes.at(i);
        if(i<primes.size()-1){
            cout<<"*";
        }
    }

    cout<<"\n";

  
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