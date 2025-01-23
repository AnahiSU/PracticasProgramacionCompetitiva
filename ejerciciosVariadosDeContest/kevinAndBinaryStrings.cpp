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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n; cin>>n;
	while(n--){
		string s;cin>>s;
		bitset<5000>bs(s);
		int ind = s.find('0',0);
		int l=0,r=0;
		if(ind == -1){
			l = 1;
			r = 1;
		}else{
			int tam = s.size()-ind;
			bitset<5000>bst;
			string bstStr = bst.to_string();
			for(int i = 0; i+tam<s.size();i++){
				string aux = s.substr(i,tam);
				bitset<5000>bsAux(aux);
				bsAux = bsAux ^ bs;
				aux = bsAux.to_string();
				bstStr = bst.to_string();
				
				for(int j = 0 ;j<5000;j++){
					if(aux[j] != bstStr[j]){
						if(bstStr[j] == '0'){
							bst = bsAux;
							l = i+1;
							r = i + tam;
						}

						break;
					}
				}
			}
		}
		cout<<1<<" "<<s.size()<<" "<<l<<" "<<r<<endl;
			
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

