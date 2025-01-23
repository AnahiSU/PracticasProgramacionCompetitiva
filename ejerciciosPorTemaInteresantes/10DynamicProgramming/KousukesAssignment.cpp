/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>

//sera que da TLE o WA? lo averiguaremos

using namespace std;
vector<int>v;
map<int,map<int,int>>dp;
int n;
int calc(int sum, int pos){
	if(dp[sum].count(pos)) {
		cout<<"hola"<<endl;
		return dp[sum][pos];
	}
	//if(dp[sum][pos] != -1e9) return dp[sum][pos];
	int res = 0;
	if(sum == 0){	
		dp[sum][pos] = 1;
		dp[sum][pos]+=calc(1e9,pos);
		return dp[sum][pos];
	}

	if(pos<0) return 0;
	
	if(sum == 1e9){
		dp[sum][pos] = calc(v[pos],pos-1);
	}else{
		dp[sum][pos] = calc(v[pos]+sum,pos-1);
	}
	dp[sum][pos] = max(dp[sum][pos],calc(1e9,pos-1));

	return dp[sum][pos];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		cin>>n;
		v.resize(n);
		dp.clear();
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}

		cout<<calc(1e9,n-1)<<endl;
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

