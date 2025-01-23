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
	int c; cin>>c;
	while(c--){
		int n; cin>>n;

		vector<int>v,imp;
		for(int i = 0; i<n;i++){
			int x;cin>>x;
			if(x%2!=0) imp.push_back(x);
			else v.push_back(x);
		}
		vector<int>aux;
		int q = 0;
		if(v.size() > 0) srt(v);
		if(imp.size()>0) srt(imp);
		int cont = 0;
		for(int i = 0; i<v.size();i++){
			aux.push_back(v[i]);
		}
		for(int i = 0; i<imp.size();i++){
			aux.push_back(imp[i]);
		}
		for(int i = 0; i<n;i++){
			for(int j = i+1; j<n;j++){
				if(__gcd(aux[i],2*aux[j])>1) cont++;
			}
		}
		cout<<cont<<endl;
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

