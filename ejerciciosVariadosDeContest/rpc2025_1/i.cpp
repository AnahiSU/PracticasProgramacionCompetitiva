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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int l;
	cin >> l;
	vector<bool> bulbs(m);
	int a;
	while (l--) {
		cin >> a;
		a--;
		bulbs[a] = true;
	}
	vector<bool> init(bulbs);
	vector<vector<int>> g(n);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> a;
			a--;
			g[i].push_back(a);
		}
	}
	int ans = 0;
	bool f = true;
	int q = 0;
	while (f) {
		bool ok = false;
		for (int i = 0; i < m; i++) {
			ok |= bulbs[i];
		}
		if (!ok) break;
		for (int& a : g[q]) {
			bulbs[a] = !bulbs[a];
		}
		ans++;
		if (q == n - 1) {
			if (bulbs == init) f = false;
		}
		q = (q + 1) % n;
	}
	if (!f) {
		cout << -1 << '\n';
	} else {
		cout << ans << '\n';
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

