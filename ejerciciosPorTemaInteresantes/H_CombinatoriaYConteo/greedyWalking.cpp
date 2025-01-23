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

vector<int> facto(1000);

int invMod(int a, int mod) {
    int res = 1, exp = mod - 2;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        exp /= 2;
    }
    return res;
}

int MOD = 1000000007;
void factoriales(){
	facto[0] = 1;
	for(int i = 1; i<=1000;i++){
		facto[i] = (i * facto[i-1]) % MOD;
	}
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	factoriales();
	int c; 
	while(cin>>c && c){
		vector<int> ini(c),fin(c);
		int sumTot = 0;
		for(int i = 0; i<c;i++){
			cin>>ini[i];
		}
		for(int i = 0; i<c;i++){
			cin>>fin[i];
		}
		int den = 1;
		for(int i = 0; i<c;i++){
			sumTot += abs(ini[i]-fin[i]);
			den = (den*facto[abs(ini[i]-fin[i])]) % MOD;
		}

		int res = (facto[sumTot] * invMod(den, MOD)) % MOD;

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

