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

int x; 
vector<int> v, dp(100001,-1);

int incr(int pos){
    if(dp[pos] != -1) return dp[pos];
    if(pos==x-1) return 1;
    dp[pos] = 1;
    if(v[pos] < v[pos+1]){
        
        dp[pos] += incr(pos+1);
    }
        
    
    return dp[pos];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>x;
    v.resize(x);
    for(int i = 0; i<x; i++){
        cin>>v[i]; 
    }
    int res = 0;
    for(int i = 0; i<x; i++){
        
        res = max(res, incr(i));
    }
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