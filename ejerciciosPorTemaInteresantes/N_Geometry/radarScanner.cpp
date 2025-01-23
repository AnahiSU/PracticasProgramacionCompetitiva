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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		int n; cin>>n;
		
		vector<int>vx,vy;
		vector<vector<int>>v;

		for(int i = 0;i<n;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			v.push_back({a,b,c,d});
			vx.push_back(a);vx.push_back(c);
			vy.push_back(b);vy.push_back(d);
		}
		srt(vx);srt(vy);
		int px = vx[((int)vx.size())/2];
		int py = vy[((int)vy.size())/2];

		int cont = 0;
		for(int i =0; i<n;i++){
			if(v[i][0] > px){
				cont+=(v[i][0]-px);
			}
			if(v[i][2] < px){
				cont+=(px-v[i][2]);
			}
			if(v[i][1] > py){
				cont+=(v[i][1] - py);
			}
			if(v[i][3] < py){
				cont+=(py - v[i][3]);
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

