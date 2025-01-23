/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int n,x;
vector<int>v,p;
vector<vector<int>>dp;
 
int maxPag(int pos,int sums){
	if(pos==n) return 0;
	if(sums == x) return 0;
	if(dp[pos][sums] != -1) return dp[pos][sums];

	//dp[pos][sums] = -1e8;	
	dp[pos][sums] = maxPag(pos+1,sums);
	
	if(sums + v[pos] <= x){
		dp[pos][sums] = max(dp[pos][sums], maxPag(pos+1,sums+v[pos]) +p[pos]);
	}
	
	
	return dp[pos][sums];
}
 
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>x;
	
	v.resize(n);
	p.resize(n);
	
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	for(int i = 0; i<n;i++){
		cin>>p[i];
	}
	dp.assign(n+1,vector<int>(100005,-1));
 
 
	cout<<maxPag(0,0)<<"\n";
 
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
// 
