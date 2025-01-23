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
#define int long long

using namespace std;
vector<int>pot1(300005),pot2(300005);
const int p1 = 31;
const int p2 = 53;
const int mod = 1e9+9;

void init(){
	pot1[0] = 1;
	for(int i = 1; i<300005;i++){
		pot1[i] = (pot1[i-1]*p1) % mod;
	}
	pot2[0] = 1;
	for(int i =1; i<300005;i++){
		pot2[i] = (pot2[i-1]*p2)%mod;
	}
}
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	string s; cin>>s;
	int n = s.size();
	init();
	vector<int>v(n+1),v2(n+1);
	for(int i = 0; i<n;i++){
		v[i+1] = (v[i]+ (s[i] - 'a' +1) * pot1[i])%mod;
		v2[i+1] = (v2[i]+ (s[i] - 'a' +1)* pot2[i])%mod;
	}
	int q; cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		int res = ((((v[r]+mod-v[l])%mod)*(pot1[n-l-1]))%mod)*((((v2[r]+mod-v2[l])%mod)*(pot2[n-l-1]))%mod);
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

