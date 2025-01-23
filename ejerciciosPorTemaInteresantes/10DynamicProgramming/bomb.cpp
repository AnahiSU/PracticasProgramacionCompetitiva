/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

//typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>
#define int long long

using namespace std;
int n,k;
vector<int>a,b;
pair<int,int> get(int x){
	int sum = 0, num = 0;
	for(int i = 0; i<n; i++){
		int d = max(0ll,a[i]-x);
		int c = d / b[i] + (a[i]>=x);
		num += c;

		int s = a[i] * c - (c-1) * c/2 * b[i];
		sum+=s;
	}
	if(num>k){
		sum-=(num-k) * x;
	}
	pair<int,int> res = make_pair(num,sum);
	return res;
}


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		cin>>n>>k;
		a.resize(n); b.resize(n);
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		for(int i = 0; i<n;i++){
			cin>>b[i];
		} 

		int l = 0, r = 1e9+2;
		while(r-l>1){
			int mid = (l+r)/2;
			if(get(mid).first >=k){
				l = mid;
			}else{
				r = mid;
			}
		}
		pair<int,int> res = get(l);
		cout<<res.second<<endl;

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

