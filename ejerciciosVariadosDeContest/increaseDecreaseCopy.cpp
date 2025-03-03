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
	int c; cin>>c;
	while(c--){
		int n; cin>>n;
		vector<int>v(n);
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}
		vector<int>v2(n+1);
		for(int i =0; i<n+1;i++){
			cin>>v2[i];
		}

		int piv = v2[n];
		int cont = 0;
		int aux = 1e9;
		bool flag = 1;
		for(int i = 0;i<n;i++){
			cont+=abs(v2[i]-v[i]);

			if(v[i]<=piv && v2[i]>=piv ||v2[i]<=piv && v[i]>=piv){
				aux=min(aux,1ll);
			}else{
				aux = min(aux,min(abs(piv-v2[i])+1,abs(v[i]-piv)+1));
			}
		}
		
		cout<<aux+cont<<endl;	
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

