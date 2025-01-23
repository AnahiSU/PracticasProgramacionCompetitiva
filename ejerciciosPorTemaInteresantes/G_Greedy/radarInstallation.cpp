
/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>

using namespace std;
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,d, cont = 0;
	while(cin>>n>>d && (n || d)){
		cont++;
		vector<pair<int,int>> p(n);
		set<int>cols;
		vector<bool>visi(n);
		for(int i = 0; i<n;i++){
			cin>>p[i].first;
			cin>>p[i].second;
		}
		int colrs = 0;
		for(int i = 0; i<n;i++){
			if(visi[i])cols.insert(colrs++);
			visi[i] = true;
			for(int j = 0; j<n;j++){
				pair<int,int> prim=p[i];pair<int,int> sec=p[j];
				double dist = sqrt(pow((prim.first - sec.first),2) + pow((prim.second - sec.second),2));
				if(dist<=2*d){
					visi[j] = true;
					cols.insert(colrs);
				}
			}
		}
		cout<<"Case "<<cont<<": "<<(int)cols.size()<<endl;
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
