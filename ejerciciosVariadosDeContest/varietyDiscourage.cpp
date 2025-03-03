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
		int n; cin>>n;
		map<int,int>ls;
		vector<int>v(n);
		for(int i =0;i<n;i++){
			cin>>v[i];
			ls[v[i]]++;
		}
		int l=0,r=0;
		int k = ls.size();
		int tam = n;
		int maxL=-1,maxR=-1;
		int score = n-k;
		int ult = 0;
		int frec = ls[v[0]];
		while(r<n&&l<n){
			cout<<l<<' '<<r<<endl;
			tam--;
			if(frec > 1){
				if(score<= tam-k){

					maxL = l;
					maxR = r;
					r++;
					frec = ls[v[r]];
				}else{
					tam++;
					if(l==r){
						l++;r++;
					}else{
						l++;
					}
					frec = ls[v[l]];
				}
			}else{
				k--;
				if(score <= tam-k){
					maxL = l;
					maxR = r;
					r++;
					frec = ls[v[r]];
				}else{
					tam++;
					k++;
					if(l==r){
						l++;
						r++;
					}else{
						l++;
					}
					frec = ls[v[l]];
				}
			}
		
		}		
		
		if(maxL == -1 && maxR == -1) cout<<0<<endl;
		else cout<<maxL+1<<" "<<maxR+1<<endl;
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

