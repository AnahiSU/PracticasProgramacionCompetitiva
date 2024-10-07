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

vector<int> generarFibo(){
    vector<int> fibo(21);
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i<21; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    vector<int> fiboBonito = generarFibo();
    int k, n;
    while(cin>>n>>k){
        if(!n&&!k) break;

        vector<int> ecologica(n);
        ecologica[0] = k;
        for(int i = 1; i<n; i++){
            ecologica[i] = ecologica[i-1] + 2 * fiboBonito[i];
        }
        cout<<ecologica[n-1]<<"\n";
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