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
	int n; cin>>n;
	vector<pair<int,int>>scores;
	while(n--){
		string s; cin>>s;
		int t = s.size();
		int p1=0,p2=0;
		string aux = "";
		for(int i = 0; i<t;i++){
			if(s[i]!='-'){
				aux.push_back(s[i]);
			}else{
				p1 = stoi(aux);
				aux = "";
			}
		}
		p2 = stoi(aux);
		scores.push_back({p1,p2});
	}
	int ant1 = 0;
	int ant2 = 0;
	int turno = 1;
	bool pers = 1, persAnt = 1; //alice 1 bob 0
	int cont = 0;

	for(auto p:scores){
		cont++;		
		int a = p.first;
		int b = p.second;


		int cantRond = abs(a-ant1) + abs(b-ant2);
		for(int i = 0; i<cantRond;i++){
			turno++;
			if(turno == 2){
				pers = !pers;
				turno =0;
			}

		}
		if(persAnt != pers){
			if(a<ant2 || b<ant1){
				cout<<"error "<< cont;
				return 0;
			}
		}else{
			
			if(a<ant1 || b<ant2){
				cout<<pers<<persAnt;
				cout<<"error "<< cont;
				return 0;
			}
		}

		ant1 = a; ant2 = b; persAnt = pers;
		
	}
	
	cout<<"ok"<<endl;
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

