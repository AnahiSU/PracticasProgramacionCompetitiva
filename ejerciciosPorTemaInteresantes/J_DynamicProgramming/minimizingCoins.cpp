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
vector<int> mon;
vector<bool> ready;
int n,x;
vector<int> v;

int coins(int monto){
    if(monto < 0) return 1e7;
    if(monto == 0) return 0;
    if(ready[monto]) return mon[monto];
    int res = 1e7;
    for(int i = 0; i<n; i++){
        res = min(res, coins(monto-v[i]) +1);
        
    }
    mon[monto] = res;
    ready[monto] = true;
    return res;
    
} 
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>x;
    v.resize(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    mon.assign(1e7,1e7);
    ready.assign(1e7,false);
    int res = coins(x);
    if(res!=1e7) cout<<res;
    else cout<<-1;
  
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