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
#define int long long
#define sz(v) (int)v.size()

using namespace std;

int MOD = 1e9 + 7;
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<string>v(n);
   vector<vector<int>>dp(n,vector<int>(n));
   for(int i = 0; i<n;i++){
      cin>>v[i];
   }
   
   dp[0][0] = 1;
   if(v[0][0] == '*'){
      cout<<0<<endl;
   }else{
      for(int i = 1; i<n;i++){
         if(v[i][0] == '*'){
            dp[i][0] = 0;
            continue;
         }
         dp[i][0] = (dp[i-1][0])%MOD;
      }
      for(int i = 1; i<n;i++){
         if(v[0][i] == '*'){
            dp[0][i] = 0;
            continue;
         }
         dp[0][i] = (dp[0][i-1]) % MOD;
      }

      for(int i = 1; i<n;i++){
         for(int j = 1; j<n;j++){
            if(v[i][j] == '*') continue;
            dp[i][j] = ((dp[i][j] + dp[i-1][j]) % MOD + dp[i][j-1]) % MOD; 
         }
      }
      cout<<dp[n-1][n-1]<<endl;
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

