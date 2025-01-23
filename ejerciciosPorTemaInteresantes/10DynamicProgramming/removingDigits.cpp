
/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
vector<int>dp(1000001,1e9);

int contar(int sum){
	if(dp[sum] != 1e9) return dp[sum];
	if(sum == 0) return 0;
	if(sum < 0) return 1e8;
	int aux = sum;
	while(aux > 9){
		if(aux%10 != 0) dp[sum] = min(contar(sum-aux%10)+1,dp[sum]);
		aux /= 10;
	}
	dp[sum] = min(contar(sum-aux%10)+1,dp[sum]);
	
	return dp[sum];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	
	int n; cin>>n;
	cout<<contar(n)<<endl;

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
