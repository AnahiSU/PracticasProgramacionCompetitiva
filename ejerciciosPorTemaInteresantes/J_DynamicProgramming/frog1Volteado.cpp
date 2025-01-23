
/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> v,dp(100005,1e9);

int saltar(int pos){
	if(pos >= n ) return 1e8;
	if(dp[pos] != 1e9) return dp[pos];

	dp[pos] = 1e8;
	dp[pos] = min(saltar(pos+1) + abs(v[pos]- v[pos+1]),saltar(pos+2) + abs(v[pos] - v[pos+2]));
	return dp[pos];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	
	cin>>n;
	v.resize(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	dp[n-1] = 0;
	dp[n-2] = abs(v[n-1]-v[n-2]);
	cout<<saltar(0)<<endl;

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
