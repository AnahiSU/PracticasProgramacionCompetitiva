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
//#define int long long
#define sz(v) (int)v.size()

using namespace std;
int MOD = 1e9+7;
 
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,x; cin>>n>>x;
   vector<int> coins(n);
   for(int i = 0; i<n;i++) cin>>coins[i];
 
   vector<vector<int>> dp(n+1,vector<int>(x+1,0));
 
   //memset(dp,0,sizeof dp);
 
   dp[0][0] = 1; 
   for(int i = 1; i<=n; i++){
      for(int j = 0; j<=x; j++){
         dp[i][j] = dp[i-1][j];
 
         if(j-coins[i-1] >=0 ){
            dp[i][j] += dp[i][j-coins[i-1]];
            dp[i][j] %= MOD;
         }
      }
   }
 
   cout<<dp[n][x]<<endl;
 
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

