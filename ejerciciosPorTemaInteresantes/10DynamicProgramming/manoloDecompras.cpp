
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
int n,w;
vector<vector<double>> dp;
vector<pair<double,int>>vals;

int cambio(int pos,int mon){
	if(pos>n) return 0;
	if(mon>w) return 0;
	if(mon == w) return 0;
	if(dp[pos][mon] != -1) return dp[pos][mon];

	if(vals[pos].second>0&&mon+1<=w){
		vals[pos].second--;
		dp[pos][mon] = cambio(pos+1,mon+1);
	}
	dp[pos][mon] = max(dp[pos][mon],cambio(pos+1,mon)+vals[pos].first);

	return dp[pos][mon];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>w;

	dp.assign(n,vector<double>(1e4,-1));

	vals.resize(n);
	for(int i = 0; i<n;i++){
		string s;cin>>s;
		int prim = 0,sec = 0;
		for(int j = 0; j<(int)s.size();j++){
			if(s[j] == '('){
				prim = j;
			}else if(s[j] == ','){
				sec = j;
			}
		}
		int v = stoi(s.substr(prim+1,sec-(prim+1)));
		int t = stoi(s.substr(sec+1,(int)s.size()-2 - (sec+1)));
		double val = (double) t/v;
		vals[i] = {val,t};

	}
	for(auto i:vals){
		cout<<i.first<<","<<i.second<<endl;
	}

	cout<<endl;
	
	cout<<cambio(0,0)<<endl;

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

