/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> con;
vector<bool> visi;
vector<vector<vector<int>>> dp;
int t,p,n;

int contest(int fila,int pro, int ptj){
	//cout<<n<<" "<<t<<endl;
	//if(ptj == t) return 0;
	if(fila == n && ptj<=t) return 0;
	if(fila > n-1) return -1e8;
	//if(ptj > t) return -1e8;
	if(dp[fila][pro][ptj] != -1e9) return dp[fila][pro][ptj];
	
	//cout<<fila<<" "<<ptj<<endl;
	//cout<<"AAAAA"<<endl;
	dp[fila][pro][ptj] = 0;
	for(int i = 0; i<p;i++){
		if(!visi[i] && con[fila][i]!=0) {
			if(ptj+con[fila][i]<=t){
				visi[i] = true;
				dp[fila][pro][ptj] = contest(fila+1,pro-1,ptj+con[fila][i]) + 1;	
			}
			visi[i] = false;
			dp[fila][pro][ptj] = max(dp[fila][pro][ptj],contest(fila+1,pro,ptj));
			visi[i] = false; 
		}
	
	}
	return dp[fila][pro][ptj];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>p>>t;
	con.resize(n,vector<int>(p));
	visi.assign(p,false);
	dp.assign(n,vector<vector<int>>(p,vector<int>(t+1,-1e9)));
	for(int i = 0; i<n;i++){
		for(int j = 0; j<p;j++){
			cin>>con[i][j];
		}
	}
	//cout<<t<<endl;
	int res = contest(0,p-1,0);


	cout<<((res < 0) ? 0 : res )<<endl;
	

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
