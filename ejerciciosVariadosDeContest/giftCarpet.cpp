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
		int n,m; cin>>n>>m;
		vector<int>arr(4,-1);
		vector<vector<char>>v(n,vector<char>(m));
		for(int i = 0; i<n;i++){
			for(int j = 0; j<m;j++){
				cin>>v[i][j];
			}
		}
		for(int j = 0; j<m;j++){
			for(int i = 0; i<n;i++){
				if(arr[0] == -1){
					if(v[i][j] == 'v'){
						arr[0] = j;
						break;
					}
				}else if(arr[1] == -1){
					if(v[i][j] == 'i'){
						arr[1] = j;
						break;
					}
				}else if(arr[2] == -1){
					if(v[i][j] == 'k'){
						arr[2] = j;
						break;
					}
				}else if(arr[3] == -1){
					if(v[i][j] == 'a'){
						arr[3] = j;
						break;
					}
				}
				
			}
		}
		if(arr[3] != -1) cout<<"YES"<<endl;
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

