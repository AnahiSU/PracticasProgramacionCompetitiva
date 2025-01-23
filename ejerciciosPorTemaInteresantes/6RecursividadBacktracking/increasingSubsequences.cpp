/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

//typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
#define int long long

using namespace std;
set<int>aux;
vector<int> formar(int x){
	vector<int>v;
	if(x == 2){
		v.push_back(0);
		aux.insert(0);
	}else if(x%2==0){
		v = formar(x/2);
		v.push_back(*(--aux.end())+1);
		aux.insert(*(--aux.end())+1);
	}else{
		v = formar(x-1);
		v.push_back(*(aux.begin())-1);
		aux.insert(*(aux.begin())-1);
	}
	return v;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		aux.clear();

		int x; cin>>x;
		auto v = formar(x);
		cout<<(int)v.size()<<endl;
		for(int i : v){
			cout<<i<<" ";
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

