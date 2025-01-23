/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/ 
#define long long int; 
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
vector<int>v;
vector<vector<int>> dp(1000005,vector<int>(105,-1));
int n;
int x; 
int contar(int sum, int pos){	
	if(sum == 0) return 1;
	if(dp[sum][pos] != -1) return dp[sum][pos];
	
	dp[sum][pos] = 0;
 
	for(int i = pos; i>=0;i--){
		if(sum-v[i] >= 0){
			dp[sum][pos] = (dp[sum][pos] + contar(sum-v[i],i)) %MOD;
			
		}
	}
 
	return dp[sum][pos];
	
}
 
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>x;
	v.resize(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	srt(v);
 
	cout<<contar(x,n-1)<<endl;
 
 
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
