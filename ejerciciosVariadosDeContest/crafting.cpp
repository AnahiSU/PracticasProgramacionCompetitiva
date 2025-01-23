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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>v(n),v2(n);
		int mini = 1e9+1;
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}
		for(int i = 0; i<n;i++){
			cin>>v2[i];
		}
		int cont = n;
		int ind = -1;
		vector<pair<int,int>>aux(n);
		for(int i = 0 ; i<n;i++){
			aux[i] = {v[i],v2[i]};

			if(v[i]>=v2[i]){
				mini = min(mini,abs(v2[i]-v[i]));
				cont--;
			}else{
				ind = i;
			}
		}
		bool flag = true;
		
		if(cont > 1) flag = false;

		if(flag && ind != -1){
			if(abs(aux[ind].first - aux[ind].second) > mini) flag = false;
		}
	
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
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

