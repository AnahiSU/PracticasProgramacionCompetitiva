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

bool palomares(int pal, vector<int>&v, int k){
	int n = v.size();
	int cont = 0, sob = 0;
	for(int i = 0; i<n;i++){
		cont += v[i]/k;
		sob += v[i]%k;
	}
	cont += sob/k;
	sob %= k;
	if(sob + cont <= pal){
		return 1;
	}else{
		return 0;
	}
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,k; cin>>n>>k;
	vector<int>v(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	if(n<k){ cout<<0<<endl;return 0;}
	int l = -1; int r = 1e12+1;
	while(r-l>1){
		int mid = (l+r)/2;
		if(palomares(mid,v,k)){
			r = mid;
		}else{
			l = mid;
		}
	}
	cout<<r<<endl;
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

