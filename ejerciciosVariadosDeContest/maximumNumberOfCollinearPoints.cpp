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
pair<pair<int, int>, int> getLine(pair<int, int> a, pair<int, int> b) {
	pair<int, int> z = {b.first - a.first, b.second - a.second};
	swap(z.first, z.second);

	z.first *= -1;
	int g = __gcd(z.first, z.second);
	z.first /= g;
	z.second /= g;

	z = min(z, {-z.first, -z.second});
	return {z, z.first * a.first + z.second * a.second};
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n;
	while(cin>>n && n){
		vector<pair<int,int>>v(n);
		for(int i = 0; i<n;i++){
			int a,b; cin>>a>>b;
			v[i] ={a,b};
		}
		map<pair<pair<int, int>, int>, int> ls;

		for( int i = 0; i<n;i++){
			for(int j = i+1; j<n;j++){
				ls[getLine(v[i],v[j])]++;
			}
		}
		int res= 0;
		int maxi = 0;
		for(auto i: ls){
			maxi = max(maxi,i.second);
		}
		for (int i = 1; i <= n; i++) {
			if (i * (i - 1) / 2 <= maxi) { res = i; }
		}
		cout<<res<<endl;

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

