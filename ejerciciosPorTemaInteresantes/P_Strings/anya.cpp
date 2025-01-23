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

bool esta(string s,int pos){
	return (pos+3<(int)s.size() && substr(pos,4) == "1100");
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		string s; cin>>s;
		for(int i =0 ; i<.size();i++){
			if(esta(s,i)){
				pos.insert(i);
			}
		}

		int q; cin>>q;
		for(int i = 0; i<q;i++){
			int pos,num; cin>>pos>>num;
			if(s[pos] == num){
				if(pos.empty()) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
				continue;
			}

			for(i = pos-4; i<pos+4 && i<(int)s.size();i++){
				if(esta(s,i)){
					flag = true;
					break;
				}
			}
			if(flag){
				for(int pos-4 ;i<pos+4;i++){

				}
			}

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

