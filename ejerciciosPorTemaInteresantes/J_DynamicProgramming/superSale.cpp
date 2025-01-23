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


using namespace std;
vector<int>wg,val;
multiset<int>ls;
vector<vector<int>>dp;
int n;
vector<bool>visi;

int cargar(int pos, int peso,int w){
	if(pos >= n) return 0;

	if(dp[pos][peso] != -1e8) return dp[pos][peso];

	dp[pos][peso] = cargar(pos+1,peso,w);
	int tomand = 0;
	if(peso+wg[pos]<=w ){

		tomand =cargar(pos+1,peso+wg[pos],w)+val[pos];
	}
	if(dp[pos][peso] < tomand){
		
		dp[pos][peso] = tomand;
	}
	return dp[pos][peso];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		cin>>n;
		dp.assign(n,vector<int>(1e6,-1e8));
		wg.resize(n);
		val.resize(n);
		visi.assign(n,false);
		for(int i = 0 ; i<n;i++){
			cin>>val[i]>>wg[i];
		}
		int m; cin>>m;
		vector<int>v(m);
		for(int i = 0; i<m;i++){
			cin>>v[i];
		}
		int res= 0,resfin = 0;
		for(int i = 0; i<m;i++){
			res = cargar(0,0,v[i]);
			for(int j = 0; j<m;j++){
				if(j==i) continue;
				res += cargar(0,0,v[j]);
			}
			resfin = max(resfin,res);
			visi.assign(n,false);
		}
		cout<<resfin<<endl;
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

