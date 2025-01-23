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
struct point {
  double x, y;
  point() {x = y = 0.0;}
  point(double _x, double _y) : x(_x), y(_y) {}
};

int cross(point a, point b, point c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,d; cin>>n>>d;

	point a (0,d);
	point b (d,0);
	point c (n,n-d);
	point e (n-d,n);
	// a d || b c 
	// a b || c d
	int m; cin>>m;

	while(m--){	
		int f,g; cin>>f>>g;
		point x (f,g);
		if(cross(a,e,x) <= 0 && cross(b,c,x) >= 0 || cross(a,e,x) >= 0 && cross(b,c,x) <=0){
			if(cross(a,b,x) <= 0 && cross(e,c,x) >= 0 || cross(a,b,x) >= 0 && cross(e,c,x) <=0){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}

		}else{
			cout<<"NO"<<endl;
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

