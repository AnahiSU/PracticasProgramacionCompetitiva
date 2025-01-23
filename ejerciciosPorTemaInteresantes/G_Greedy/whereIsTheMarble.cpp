
/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>

using namespace std;
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,q,cont = 0;
	
	while(cin>>n>>q && n && q){
		cont++;
		cout<<"CASE# "<<cont<<":"<<endl;
		vector<int>v(n);
		map<int,int>ord;
		int maxi = -1;
		for(int i= 0; i<n;i++){
			cin>>v[i];
			maxi = max(maxi,v[i]);
		}
		vector<bool>visi(maxi);
		srt(v);
		for(int i = 0; i<n;i++){
			if(!visi[v[i]]) {ord[v[i]] = i+1;
			visi[v[i]] = true;}
		}
		while(q--){
			int que;cin>>que;
			int res = ord[que];
			if(res) cout<<que<<" found at "<<res;
			else cout<<que<<" not found";
			cout<<endl;


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
