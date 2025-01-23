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
		vector<string>v(n);
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}
		string res = "";
		for(int i = 0; i<n;i++){
			int cer=0,un=0;
			for(int j = 0; j<n;j++){
				if(v[j] == "?") continue;
				if(v[j][i] == '0'){
					cer++;
				}else{
					un++;
				}
			}
			if(cer>un){
				for(int j = 0; j<n;j++){
					if(v[j][i] == '0') v[j] = "?";
				}
				res.push_back('1');
			}else{
				for(int j = 0; j<n;j++){
					if(v[j][i] == '1') v[j] = "?";
				}
				res.push_back('0');
			}
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

