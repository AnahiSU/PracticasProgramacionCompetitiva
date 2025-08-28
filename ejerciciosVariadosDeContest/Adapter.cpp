
/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#include <bits/stdc++.h>
#define srt(a) sort(a.begin(),a.end())
#define endl "\n"
#define int long long
#define sz(v) (int)v.size()

using namespace std;
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c,p;
	cin>>c>>p;
	vector<int> iz(c);
	vector<int> der(c);
	bool bandera=false;
	for(int i=0;i<c;i++){
		cin>>iz[i];
	}
    for(int i=0;i<c;i++){
		cin>>der[i];
	}
	sort(iz.begin(),iz.end());
	sort(der.begin(),der.end());
	vector<int> izs(c);
	vector<int> ders(c);
	izs[0]=iz[0];
	ders[0]=der[0];
	for(int i=1;i<c;i++){
		izs[i]=iz[i]+izs[i-1];
		ders[i]=der[i]+ders[i-1];
	}
	int res=0;
	for(int i=0;i<c;i++){
		res=i+1;
		if(izs[i]+ders[i]>p){
			cout<<i<<endl;
			bandera=true;
			break;
		}
	}
	if(bandera==false){
		cout<<res<<endl;
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
