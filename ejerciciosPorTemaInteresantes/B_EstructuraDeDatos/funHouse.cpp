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
	int n,m;
	int cont = 1;

	while(cin>>m>>n){
		if(n && m){
			cout<<"HOUSE "<<cont<<endl;
			cont++;
			int actuX = 0,actuY = 0;
			vector<string>mat(n);
			for(int i = 0; i<n; i++){
				cin>>mat[i];
				for(int j = 0; j<n;j++){
					if(mat[i][j] == '*'){
						actuX = i; actuY = j;
					}
				}
			}
			int estado;
			if(actuX == 0){
				estado = 1;
				actuX++;
			}else if(actuY ==0){
				estado = 4;
				actuY++;
			}else if(actuX == n-1){
				estado = 2;
				actuX--;
			}else if(actuY == m-1){
				estado = 3;
				actuY--;
			}

			while(mat[actuX][actuY] != 'x'){
				if(mat[actuX][actuY] == '/'){
					if(estado == 1){
						estado = 3;
						actuY--;
						continue;
					}else if(estado == 2){
						estado = 4;
						actuY++;
						continue;
					}else if(estado == 3){
						estado = 1;
						actuX++;
						continue;
					}else if (estado == 4){
						estado = 2;
						actuX--;
						continue;
					}
				}else if(mat[actuX][actuY] != '.' && mat[actuX][actuY] != 'x' && mat[actuX][actuY] != '*'){
					if(estado == 1){
						estado = 4;
						actuY++;
						continue;
					}else if(estado == 2){
						estado = 3;
						actuY--;
						continue;
					}else if(estado == 3){
						estado = 2;
						actuX--;
						continue;
					}else if (estado == 4){
						estado = 1;
						actuX++;
						continue;
					}
				}

				if(estado == 1){
					actuX++;
				}else if(estado == 2){
					actuX--;
				}else if(estado == 3){
					actuY--;
				}else if(estado == 4){
					actuY++;
				}
			}
			mat[actuX][actuY] = '&';
			for(int i = 0; i<n;i++){
				for(int j = 0; j<m;j++){
					cout<<mat[i][j];
				}
				cout<<endl;
			}
			cout<<endl;
			
		}else{
			break;
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

