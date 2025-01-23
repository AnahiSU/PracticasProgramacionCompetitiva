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
int n = 8;
vector<vector<char>>v(8,vector<char>(8,'.'));
void pintarFilCol(int i, int j){
	for(int i = 0; i<n;i++){
		v[i][j] = '#';
	}
	for(int j = 0; j<n;j++){
		v[i][j] = '#';
	}
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c = 0;
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			char ch;
			cin>>ch;
			if(ch == '#'){
				pintarFilCol(i,j);
			}
		}
	}
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			if(v[i][j] == '.'){
				c++;
			}
		}
	}
	cout<<c<<endl;

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

