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
	string s; cin>>s;
	int n = (int)s.size();
	int pr=0,sg=0,j=0,j2=0;
	bool turno = true; //T -> 1 F -> 2
	for(int i = 0 ; i<n; i++){
		if(s[i] == 'S'){
			if(turno){
				pr++;
			}else{
				sg++;
			}
			if((pr>=5 && abs(pr-sg) >=2) || pr==10) {
				sg=0;
				pr=0;
				j++;
			}else if((sg>=5 && abs(pr-sg) >=2) || sg==10) {
				pr=0;
				sg=0;
				j2++;
			}
		}else if(s[i] == 'R'){
			if(turno){
				sg++;
				turno = false;
			}else{
				pr++;
				turno = true;
			}
			if((pr>=5 && abs(pr-sg) >=2) || pr==10) {
				sg=0;
				pr=0;
				j++;
			}
			else if((sg>=5 && abs(pr-sg) >=2) || sg==10) {
				pr=0;
				sg=0;
				j2++;
			}
		}else{
			//mostrar
			if(i == n-1){
				if(j>j2){
					cout<<j<<" (winner)"<< " - "<<j2<<endl;
				}else{
					if(j<j2){
						cout<<j<< " - "<<j2<<" (winner)"<<endl;
	
					}else if(pr>sg){
						cout<<j<<" (winner)"<< " - "<<j2<<endl;

					}else{
						cout<<j<< " - "<<j2<<" (winner)"<<endl;	
					}
				}

			}else{
				if(turno){
					cout<<j<<" ("<<pr<<"*)"<<" - "<<j2<<" ("<<sg<<")"<<endl;
				}else{
					cout<<j<<" ("<<pr<<")"<<" - "<<j2<<" ("<<sg<<"*)"<<endl;

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

