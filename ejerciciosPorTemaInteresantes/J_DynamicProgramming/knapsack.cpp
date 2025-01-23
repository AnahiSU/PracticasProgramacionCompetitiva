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
vector<ll> val, wei;
vector<vector<ll>>dp;
ll w,n;
ll robar(int pos, int peso){
    if(pos == n) return 0;
    if(dp[pos][peso] != -1) return dp[pos][peso];

    dp[pos][peso] = robar(pos+1,peso); //sin tomar
    if(peso + wei[pos] <= w){
        dp[pos][peso] = max(dp[pos][peso] , robar(pos+1, peso+wei[pos]) + val[pos]); //tomando 
    } 
    return dp[pos][peso];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>w;
    val.resize(n); wei.resize(n);

    for(int i = 0; i<n; i++){
        cin>>wei[i]>>val[i];

    }
    dp.assign(105,vector<ll> (100005,-1));
    ll res = robar(0,0);
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