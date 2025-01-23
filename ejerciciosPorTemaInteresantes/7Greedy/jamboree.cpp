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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,m; cin>>n>>m;
	vector<int>v(n);
	for(int i = 0 ; i<n; i++){
		cin>>v[i];
	}
	int i = 0,mayor = -1;
	srt(v);
	while(n>m){
		int aux = v[i];
		v.erase(v.begin());
		auto up = upper_bound(v.begin(),v.end(),aux);
		int upper = 0;
		if(up != v.end()){
			upper = *up;
			v.erase(up);
		}
		else {
			upper = v.back();
			v.pop_back();
		}
		mayor = max(mayor,upper);
		m--;
	}
	int may = -1;
	for(int i =0 ; i<(int)v.size();i++){
		may = max(v[i],may);
	}
	cout<<max(may,mayor)<<endl;
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

