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
	string s,res; cin>>s;
	res = s;
	int aux = n-1;
	if(n == 2){
		int c = 0;
		for(int i = 0; i<n;i++){
			if(i%2 == 0){
				if(s[i] == '1'){
					res[i] = '0';
					c++;
				}
			}else{
				if(s[i] == '0'){
					res[i] = '1';
					c++;
				}
			}
		}
		string res2 = res;
		int c2 = 0;
		for(int i = 0; i<n;i++){
			if(i%2 != 0){
				if(s[i] == '1'){
					res2[i] = '0';
					c2++;
				}
			}else{
				if(s[i] == '0'){
					res2[i] = '1';
					c2++;
				}
			}
		}
		if(c>c2){
			cout<<c2<<" "<<res2<<endl;
		}else{
			cout<<c<<" "<<res<<endl;
		}
		return 0;

	}
	int c = 0;
	for(int i = 0; i<n-1;i++){
		if(aux){
			aux--;
			continue;
		}
		if(s[i+1] == s[i]){
			if(s[i-1] == '1') s[i-1] = '0';
			else s[i-1] = '1';
			c++;
			aux = n-1;
		}else{
			if(s[i] == '0') s[i] = '1';
			else s[i] = '0';
			aux = n-1;
			c++;
		}
	}
	cout<<c<<" "<<s<<endl;
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

