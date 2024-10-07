/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;

struct unionFind {
   vector<int> p;
   int c; 
   unionFind(int n) : p(n, -1), c(n) {}

   int find(int x) {
       if (p[x] == -1) return x; 
       return p[x] = find(p[x]); 
   }

   bool join(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false; 
        p[y] = x;  
        c--;     
        return true;
   }

   int size1() {
       return c-1;
   }
};

class disjoint_set {
	
	private:
		vector<int> parents;
		vector<int> sizes;

	public:
		disjoint_set(int size) : parents(size), sizes(size, 1) {
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
    ios::sync_with_stdio(false);cin.tie(0);
  
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