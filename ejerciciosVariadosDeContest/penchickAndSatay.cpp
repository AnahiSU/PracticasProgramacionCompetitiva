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
		bool flag = 1;
		vector<int>v(n),ord(n);
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}
		ord = v;
		srt(ord);
		for(int i = 0; i<n-1;i++){
			if(v[i] != ord[i]){
				if(abs(v[i+1]-v[i]) == 1){
					swap(v[i],v[i+1]);
					
				}
			}
		}
		for(int i= 0; i<n;i++){
			if(v[i] == ord[i]){
				flag = 1;
			}else{
				cout<<"NO"<<endl;
				
				flag = 0;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
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
