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
	vector<vector<int>>mat(12,vector<int>(12,0));
	
	bool res = true;
	while(n--){
		int d,l,r,c; cin>>d>>l>>r>>c;
		if(l<=10 && l>0 && r<=10 && l>0){
			if(d == 0){
				for(int i = c;i<=c+l-1;i++){
					if(i<=10 && i>0 && r<=10 && r>0){
						if(mat[r][i] == 1) res= false;
						else mat[r][i] = 1;
					}else{
						res = false;
					}
				}
			}else{
				for(int i = r; i<=r+l-1;i++){
					if(i<=10 && i>0 && c<=10 && c>0){
						if(mat[i][c] == 1) res= false;
						else mat[i][c] = 1;
					}else{
						res = false;
					}
				}
			}

		}
				
	}
	if(res) cout<<"Y";
	else cout<<"N";
	cout<<endl;
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

