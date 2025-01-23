/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/


#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
#define int long long

using namespace std;
int MOD = 1e9+7;

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n, m; cin>>n>>m;
	vector<int>v(n);
	vector<vector<int>>dp(n+1,vector<int>(m+1,0));
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	for(int i = 1;i<=m;i++){
		if(v[0]==0){
			dp[0][i] = 1;
		}else{
			dp[0][v[0]] = 1;
			break;
		}
	}
	for(int i = 1; i<n;i++){
		if(v[i] != 0){
			dp[i][v[i]] = dp[i-1][v[i]]%MOD;
			if(v[i]-1 > 0) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]-1])%MOD;
			if(v[i]+1 <= m) dp[i][v[i]] = (dp[i][v[i]] + dp[i-1][v[i]+1])%MOD;
			continue;
		}
		for(int j = 1;j<=m;j++){
			dp[i][j] = dp[i-1][j]%MOD;
			if(j-1 > 0) dp[i][j] = (dp[i][j] + dp[i-1][j-1])%MOD;
			if(j+1 <= m) dp[i][j] = (dp[i][j] + dp[i-1][j+1])%MOD;
		}
	}

	int res = 0;
	for(int i = 1; i<=m;i++){
		res=(res+dp[n-1][i])%MOD;
	}	
	cout<<res<<endl;

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

