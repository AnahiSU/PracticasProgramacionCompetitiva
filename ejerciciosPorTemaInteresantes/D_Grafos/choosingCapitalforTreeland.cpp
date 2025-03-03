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
vector<vector<pair<int,int>>> gB;
vector<bool>visi;
vector<int>cont;

int dfs(int v){
	visi[v] =true;
	int res = 0;

	for(auto hijo : gB[v]){
		int u = hijo.first;
		int dir = hijo.second;
		if(!visi[u]){
			res+=dfs(u);
			if(dir == -1){
				res++;
			}
		}
	}
	
	return res;
}

void calcDP(int v){
	visi[v] = true;
	for(auto hijo : gB[v]){
		int u = hijo.first;
		int dir = hijo.second;
		if(visi[u]) continue;
		cont[u] = cont[v];
		if(dir == 1){
			cont[u]++;
		}else{
			cont[u]--;
		}
		calcDP(u);
	}
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n; cin>>n;
	gB.resize(n);
	visi.resize(n);
	for(int i =0;i<n-1;i++){
		int a,b; cin>>a>>b;
		a--;b--;
		gB[a].push_back({b,1});
		gB[b].push_back({a,-1});
	}
	cont.resize(n);
	
	cont[0] = dfs(0);

	int mini = 1e9;
	
	visi.assign(n,false);

	calcDP(0);
	
	for(int i = 0;i<n;i++){
		mini = min(mini,cont[i]);
	}
	cout<<mini<<endl;
	for(int i = 0;i<n;i++){
		if(cont[i]==mini) cout<<i+1<<" ";
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

