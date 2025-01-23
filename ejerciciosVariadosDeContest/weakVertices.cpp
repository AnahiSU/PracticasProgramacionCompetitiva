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
	int n; 

	while(cin>>n){
		vector<bool>visi(n);
		if(n==-1) return 0;
		vector<vector<int>>mat(n,vector<int>(n,0));
		for(int i = 0; i<n;i++){
			for(int j = 0; j<n;j++){
				cin>>mat[i][j];
			}
		}

		for(int i = 0; i<n;i++){
			for(int j = i+1; j<n;j++){
				if(mat[i][j]){
					for(int k = j+1;k<n;k++){
						if(mat[k][i] && mat[j][k]){
							visi[i] =1;
							visi[j] =1;
							visi[k] =1;
						}
					}
				}
			}
		}
		for(int i = 0; i<n;i++){
			if(!visi[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;

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

