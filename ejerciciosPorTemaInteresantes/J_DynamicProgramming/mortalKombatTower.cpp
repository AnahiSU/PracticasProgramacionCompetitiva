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
vector<int> v;
vector<vector<int>>dp;

int jugar(int pos,int turn){
	if(pos > n-1) return 0;

	if(dp[pos][turn] != 1e9) return dp[pos][turn];
	
	if(turn){
		//dp[pos] = min(0,jugar(pos+1,!turn));
		dp[pos][turn] = min(jugar(pos+1,0),jugar(pos+2,0));
	}else{
		dp[pos][turn] = 0;

		dp[pos][turn] = jugar(pos+1,1) + v[pos];
		
		if(pos+2 < n) dp[pos][turn] = min(dp[pos][turn],jugar(pos+2,1)+v[pos+1]+v[pos]);
	}
	return dp[pos][turn];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int t; cin>>t;
	while(t--){
		cin>>n;
		v.assign(n,0);	
		dp.assign(n,vector<int>(2,1e9));
		for(int i = 0; i<n; i++){
			cin>>v[i];
		}
		//jugar(0,0);	
		//cout<<endl;
		//cout<<"------"<<endl;	
		
		cout<<jugar(0,0)<<endl;
		//cout<<"------"<<endl;
		
		v.clear();
	

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
