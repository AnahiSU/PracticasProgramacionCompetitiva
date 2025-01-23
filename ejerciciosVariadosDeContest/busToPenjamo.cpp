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
	int t; cin>>t;
	while(t--){
		int n,r; cin>>n>>r;
		vector<int>mods(n);
		int feliz = 0;
		for(int i = 0; i<n;i++){
			int x; cin>>x;
			feliz+= x/2;
			mods[i] = x%2;
		}
		//for(int i: mods){
		//	cout<<i<<" ";
		//}
		//cout<<endl;
		r = r-feliz;
		feliz*=2;
		//cout<<"feliz: "<<feliz<<endl;
		
		int ads = 0;
		if(r<0) cout<<feliz;
		else{
			for(int i = 0; i<n;i++){
				if(r>=mods[i] && mods[i] != 0){
					r--;
		//			cout<<"para: "<<mods[i]<<" "<<feliz<<" "<<r<<endl;
					feliz++;
				}else{
					if(mods[i] != 0)ads++;
				}
			}
		}
		//cout<<"res"<<endl;
		cout<<feliz-ads<<endl;
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

