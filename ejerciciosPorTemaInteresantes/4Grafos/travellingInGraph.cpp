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
class disjointSet {
	
	private:
		vector<int> parents;
		vector<int> sizes;

	public:
		disjointSet(int size) : parents(size), sizes(size, 1) {
			for (int i = 0; i < size; i++) {
				parents[i] = i;
			} 
		}

		int find(int x) {
			return parents[x] == x ? x : (parents[x] = find(parents[x]));
		}
		
		bool unite(int x, int y) {
			int x_root = find(x);
			int y_root = find(y);
			if (x_root == y_root) return false;

			if (sizes[x_root] < sizes[y_root]) swap(x_root, y_root);
			sizes[x_root] += sizes[y_root];
			parents[y_root] = x_root;
			return true;
		}

		bool connected(int x, int y) {
			return find(x) == find(y);
		}

};


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		int n,ar;cin>>n>>ar;
		disjointSet ds(n+1);
		while(ar--){
			int a,b; cin>>a>>b;
			ds.unite(a,b);
		}
		int cont = 0;
		for(int i = 2; i<=n;i++){
			if(!ds.connected(1,i)){
				cont++;
				ds.unite(1,i);
			}
		}
		cout<<cont<<endl;
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

