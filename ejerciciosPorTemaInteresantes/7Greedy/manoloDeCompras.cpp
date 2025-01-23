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
#define double long double

using namespace std;


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,w; cin>>n>>w;
	cout<<fixed<<setprecision(2);
	vector<pair<double,int>> v(n);
	for(int i = 0; i<n;i++){
		char c; double val,p; 
		cin>>c>>val>>c>>p>>c;
		double aux = (val/p);
		v[i] = make_pair(aux,p);
	}
	sort(v.rbegin(),v.rend());

	double tot = 0;
	int peso = 0;
	int i = 0; 
	while(peso<w){
		tot+=v[i].first;
		v[i].second--;
		peso++;
		if(v[i].second <= 0) i++;
		if(peso>w){
			tot-=v[i].first;
			break;
		}
	}
	cout<<"Manolo gastara "<<tot<<endl;
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

