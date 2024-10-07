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
const int MOD = 1e9;
const int ta = 1010;
ll bino[ta][ta];
void init()
{
    for(int i = 0; i < ta; i++) 
        bino[i][0] = 1;
    for(int i = 1; i < ta; i++) 
        for(int j = 1; j < ta; j++) 
            bino[i][j] = (bino[i - 1][j] + bino[i - 1][j-1]) % MOD;
}



signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    ll c; cin>>c;
    while(c--){
        ll a; cin>>a;
        init();
        for(int i = 0; i<a;i++){
            if(bino[a][i] != 0){
                cout<<bino[a][i]<<" ";
            }
        }
        cout<<1;
        cout<<"\n";
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