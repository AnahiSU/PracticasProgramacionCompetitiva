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
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int z; cin>>z;
    while(z--){
        int m,n,k; cin>>n>>m>>k;
        int l = n;
        for(int i = 0; i<(n-k+1); i++){
            cout<<l<<" "; l--;
        }
        for(int i = 0; i< n - ((n - k) + 1 + m);i++){
            cout<<l<<" "; l--;
        }

        for(int i = 0; i<m;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
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