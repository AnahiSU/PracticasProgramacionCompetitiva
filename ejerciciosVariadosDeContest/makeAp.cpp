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
		int a,b,c;
		cin>>a>>b>>c;
		int d1 = abs(a-b);
		int d2 = abs(b-c);
		int dDob = abs(a-c);

		if(a>=b){
			if(b-d1 > 0 && (b-d1) % c == 0){
				cout<<"YES"<<endl;
				continue;
			}
		}
		if(a<=b){
			if((b+d1) % c == 0){
				cout<<"YES"<<endl;
				continue;
			}
		}
		if(c>=b){
			if(b-d2 > 0 && (b-d2) % a == 0){
				cout<<"YES"<<endl;
				continue;
			}

		}
		if(b>=c){
			if((b+d2) % a == 0){
				cout<<"YES"<<endl;
				continue;
			}
		}

		if(dDob % 2 == 0 && (dDob/2) + a == c -(dDob/2) && ((dDob/2) + a) % b == 0){
			cout<<"YES"<<endl;
			continue;
		}

		if(dDob % 2 == 0 && (dDob/2) + c == a -(dDob/2) && ((dDob/2) + c) % b == 0){
			cout<<"YES"<<endl;
			continue;
		}


		if(a-b == b-c){
			cout<<"YES"<<endl;
			continue;
		}
		cout<<"NO"<<endl;
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

