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



signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,m; cin>>n>>m;
	unionFind dsu(n);
	for(int i = 0; i<m;i++){
		int a,b;
		cin>>a>>b;
		dsu.join(a,b);
	}
	int maxi = 0;
	for(int i = 1; i<=n;i++){
		maxi = max(dsu.find(i),maxi);
	}
	cout<<maxi*(maxi-1)<<endl;

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

