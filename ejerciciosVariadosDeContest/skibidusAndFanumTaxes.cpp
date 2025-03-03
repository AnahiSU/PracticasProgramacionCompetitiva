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
		int n,m; cin>>n>>m;
		
		vector<int>v(n);
		vector<int>b(m);
		for(int i = 0; i<n;i++){
			cin>>v[i];
		}
		for(int i = 0; i<m;i++){
			cin>>b[i];
		}
		srt(b);
		int ant = -1e9+1;
		bool flag =1;
		for(int i = 0; i<n;i++){
			int l=-1,r=m;
			while(r-l > 1){
				int mid = (l+r)/2;
				if(b[mid] - v[i] >= ant){
					r = mid;
				}else{
					l = mid;
				}
			}
			if(r>=m || r<0){
				ant = v[i];
				continue;
			}
			if (((b[r] - v[i] < v[i]) && (b[r] - v[i] >= ant)) || (v[i] < ant && b[r] - v[i] >= ant)) {
        		v[i] = b[r] - v[i];
      		}
        	ant = v[i];
		}


		for(int i=0; i<n-1;i++){

			if(v[i]>v[i+1]){
				flag =0;
			}
		}


		(flag) ? cout<<"YES" : cout<<"NO";
		cout<<endl;
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

