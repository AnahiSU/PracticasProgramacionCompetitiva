
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
#define int long long

using namespace std;

vector<int>niv;
vector<bool>visi;
void niveles(int v,int nivel,vector<vector<int>>&gr){
	niv[v] = nivel;
	visi[v] = true;
	for(int i : gr[v]){
		if(visi[i]) continue;
		niveles(i,nivel+1,gr);
	}
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n; cin>>n;
	vector<vector<int>>v(n);
	vector<int>frutos(n);
	for(int i = 0; i<n-1;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i = 0; i<n;i++){
		cin>>frutos[i];
	}
	niv.resize(n);
	visi.assign(n,false);
	niveles(0,1,v);
	
	int tot = 0;
	for(int i = 0; i<n;i++){
		tot+= niv[i]*frutos[i];
	}
	int maxi = tot;
	int maxN = *max_element(niv.begin(),niv.end());
	for(int i = 0; i<n;i++){
		maxi = max(maxi,tot-(niv[i]*frutos[i]) + (maxN * frutos[i]));
	}
	cout<<maxi<<endl;

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

