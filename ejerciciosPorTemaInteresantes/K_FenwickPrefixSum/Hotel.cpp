/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

typedef long long ll;
#include <bits/stdc++.h>

using namespace std;

struct BIT { // 1-indexed, your first element of the array is at index 1
    vector<ll> bit;
    ll n;
    BIT(int n) : bit(n+1), n(n) {}

    ll lsb(int i) { return i & -i; } // least significant bit
	
	 void add(int i, ll x) {
        for (; i <= n; i += lsb(i)) bit[i] += x;
    }

    ll sum(int r) {
        ll res = 0;
        for (; r > 0; r -= lsb(r)) res += bit[r];
        return res;
    }

    ll sum(int l, int r) {
        return sum(r) - sum(l-1);
    }

    void set(int i, ll x) {
        add(i, x - sum(i, i));
    }
};



signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,t; cin>>n>>t;
	BIT fent(n);
	for(int i =0 ; i<n;i++){
		fent.set(i+1,1);
	}
	while (t--){
		char q; cin>>q;
		if(q == 'A'){
			int l,r; cin>>l>>r;
			cout<<fent.sum(l,r)<<endl;
		}else{
			int i ; cin>>i;
			fent.set(i,0);
		}
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
