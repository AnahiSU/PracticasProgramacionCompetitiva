/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

//typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
#define int long long

using namespace std;
vector<vector<int>>dp;
vector<int>v;
int n;


int calc(int pos, int ant){
	if(dp[pos][ant] != -1) return dp[pos][ant];
	if(pos == n) return 0;

	dp[pos][ant] = 1+calc(pos+1,n);
	dp[pos][ant] = min(dp[pos][ant],calc(pos+1,pos)+v[pos]);

	if(ant != n){
		if(v[ant] >= v[pos]){
			dp[pos][ant] = min(dp[pos][ant],calc(pos+1,pos));
		}else{
			dp[pos][ant] = min(dp[pos][ant],calc(pos+1,pos)+v[pos]-v[ant]);
			dp[pos][ant] = min(dp[pos][ant],1+calc(pos+1,ant));
		}
	}
	return dp[pos][ant];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	v.resize(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	dp.assign(5e3+8,vector<int>(5e3+8,-1));
	cout<<calc(0,n)<<endl;
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

