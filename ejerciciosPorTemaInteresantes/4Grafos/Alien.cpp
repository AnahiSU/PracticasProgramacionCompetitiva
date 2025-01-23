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
int tam = 0;
vector<bool>visi;
vector<vector<int>> gr;
void dfs(int v){
    tam++;
    visi[v]=true;
    for(int vi : gr[v]){
        if(!visi[vi]){
            dfs(vi);
        }
    }   
}
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
	gr.clear();
	int m; cin>>m;
	gr.resize(c);
	for(int i = 0; i<m; i++){
		int a,b; cin>>a>>b;
		a--; b--;
		gr[a].push_back(b);
		gr[b].push_back(a);
	}

	int maxN = -1;
	visi.assign(c,false);

	for(int i = 0; i<c; i++){
		if(!visi[i]){
			tam = 0;
			dfs(i);
			maxN = max(tam, maxN);
		}
	}
	cout<<maxN<<"\n";
    
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

