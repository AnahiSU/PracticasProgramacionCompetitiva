/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e9;

int n;
int memo[11][1001];
int dp(int last, auto& stage, int c_stage, int sum, int k) {
	if (memo[c_stage][sum] != -1) {
		return memo[c_stage][sum];
	}
	if (c_stage >= n) {
		return 0;
	}
	memo[c_stage][sum] = -INF; // por si no toma ningun 
	for (auto& v : stage) { // anadir otro parametro k para controlar el show del stage
		for (auto& p : v) {
			int a, b, c;
			a = p.first.first;
			b = p.first.first;
			c = p.second;
			if (a >= last) {
				memo[c_stage][sum] = max(dp(), dp(last, stage, c_stage, sum));
			}
		}
	}
	return memo[c_stage][sum];
} 

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);

	cin >> n;

	vector<vector<pair<pair<int, int>, int>>> stage(n);
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		int a, b, c;
		for (int j = 0; j < m; j++) {
			cin >> a >> b  >> c;
			stage[i].push_back({{a, b}, c});
		}
	}
	memset(memo, -1, sizeof memo);
	int ans = dp(0, stage, 0, 0, 0);
	cout << ans << '\n';

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

