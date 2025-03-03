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

using namespace std;


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		int n,m,k; cin>>n>>m>>k;
		string s;
		s.push_back('$');
		for(int i = 0; i<n;i++){
			char x; cin>>x;
			s.push_back(x);
		}
		s.push_back('L');
		int act = 0;
		bool flag = 1;
		while(act<=n){
			if(s[act] == 'W'){
				k--;
				act++;
				continue;
			}
			if(s[act] == 'C'){
				flag = 0;
				break;
			}

			int ultW = -1, ultL = -1;
			for(int i = min(n+1,act+m);i > act;i--){
				if(s[i] == 'W'){
					ultW = max(i,ultW);
				}else{
					if(s[i]=='L'){
						ultL = max(i,ultL);
					}
				}
			}

			if(ultW != -1 && ultL != -1){
				act = ultL;
			}else if(ultW == -1 && ultL !=-1){
				act = ultL;
			}else if(ultL == -1 && ultW !=-1){
				act = ultW;
			}else{
				flag = 0;
				break;
			}

		}
		if(flag && k>=0){
			cout<<"YES"<<endl;
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


