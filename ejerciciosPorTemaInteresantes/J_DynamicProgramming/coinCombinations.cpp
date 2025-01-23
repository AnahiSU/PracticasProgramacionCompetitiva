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
ll mon[1000005];
ll n,x;
vector<ll> v;
ll MOD = 1e9 + 7;

ll coins(ll monto){
    if(monto < 0) return 0;
    if(monto == 0) return 1;
    if(mon[monto] != -1) return mon[monto];
    ll res = 0;
    for(int i = 0; i<n; i++){
        res += coins(monto-v[i]);
    }
    mon[monto] = res;
    mon[monto] %= MOD;
    return mon[monto];
    
} 
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>x;
    v.resize(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    memset(mon, -1 , sizeof(mon));
    ll res = coins(x);
    cout<<res;
    
  
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