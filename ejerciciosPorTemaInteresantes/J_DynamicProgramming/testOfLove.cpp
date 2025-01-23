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
int n,m,l;
vector<char>v;
vector<int>dp;

bool esPosible(int pos,int sal){
	if(pos>n) return 1;
	if(v[pos] == 'C') return 0;
	if(pos+m>=n+1 && v[pos] !='W') return 1;
	if(dp[pos] != -1) return dp[pos];
	if(v[pos] =='W'){
		if(sal<=0) return 0;
		sal--;
	}
	dp[pos] = 0;

	if(v[pos] == 'W'){
		dp[pos] = dp[pos] || esPosible(pos+1,sal);
	}else{
		for(int i = 1; i<=m;i++){
			dp[pos] = dp[pos] || esPosible(pos+i,sal); 
		}
	}
		
	return dp[pos];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		cin>>n>>m>>l;
		v.resize(n+1);
		dp.assign(n+1,-1);
		v[0] = 'L';
		for(int i = 1; i<=n;i++){
			cin>>v[i];
		}
		if(n+1<=m) {cout<<"YES"<<endl; continue;}
		int res = 0;
		res = esPosible(0,l);
		
		if(res) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
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

