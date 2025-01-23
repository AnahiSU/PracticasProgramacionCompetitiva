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
	int n; cin>>n;
	vector<string>v(n);
	for(int i = 0; i<n;i++){	
		cin>>v[i];
	}

	set<char> patron;
	for(int i = 0; i<v[0].size();i++){
		patron.insert(v[0][i]);
	}
	
	int g; cin>>g;
	
	while(g--){
		int c = 0;
		string pat; cin>>pat;
		if(pat == "*****"){cout<<1<<endl;continue;}
		string auxPat;
		for(int i = 1; i<n;i++){

			for(int j = 0; j<v[i].size();j++){
				if(v[i][j] == v[0][j]){
					auxPat.push_back('*');
				}else if(patron.find(v[i][j]) != patron.end()){
					auxPat.push_back('!');
				}else{
					auxPat.push_back('X');
				}
			}
			if(auxPat == pat){
				c++;
			}
			auxPat.clear();
		}
		cout<<c<<endl;
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

