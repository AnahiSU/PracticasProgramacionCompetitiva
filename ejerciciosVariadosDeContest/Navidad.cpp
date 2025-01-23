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
vector<int>v;
int k; 
bool distribuir(int n){
	int c = 1,sum = 0;
	for(int i = 0; i<(int)v.size();i++){
		if(sum+v[i]<=n){
			sum+=v[i];
		}else{
			sum = v[i];
			c++;
		}
	}
	return c<=k;
}
 
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n; cin>>n;
	v.resize(n);
	int sum = 0;
	int may = 0;
	for(int i = 0; i<n;i++){
		cin>>v[i];
		may = max(may,v[i]);
		sum+=v[i];
	}

	cin>>k;
    int l=may-1,r=sum+1;
	while(r-l>1){
		int mid = (l+r)/2;
		if(distribuir(mid)){
			r = mid;
		}else{
			l = mid;
		}
	}	
	cout<<r<<endl;

 
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
 
