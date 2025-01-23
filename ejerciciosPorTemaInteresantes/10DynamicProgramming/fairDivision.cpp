/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>

using namespace std;

int n,sumTot = 0; vector<int>v;
vector<vector<int>> dp;
int repartir(int pos, int sum){
	//cout<<"para pos: "<<pos<<" sum: "<<sum<<endl;

	if(sum == sumTot/2) return sum;
	if(pos==n) return -1;
	//if(sum>sumTot/2) return -1;
	if(dp[pos][sum] != -2) return dp[pos][sum];

	//cout<<"hola"<<endl;	
	dp[pos][sum] = repartir(pos+1,sum);
	if(dp[pos][sum] != sumTot/2 && sum+v[pos] <= sumTot/2) dp[pos][sum] = repartir(pos+1,sum+v[pos]);

	return dp[pos][sum];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int k; cin>>k;
	while(k--){
		sumTot = 0;
		cin>>n;
		v.resize(n);

		for(int i = 0; i<n;i++){
			cin>>v[i];
			sumTot +=v[i];
		}

		dp.assign(n,vector<int>(sumTot,-2));
		//cout<<sumTot<<endl;
		if(sumTot %2 != 0){
			cout<<"NO"<<endl;
		}else{
			cout<<((repartir(0,0) > 0) ? "YES" : "NO") <<endl;
		}
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
