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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int k; cin>>k;
	string s; cin>>s;

	int n = (int)s.size();
	vector<int>v(n+1);
	v[0] = 0;
	for(int i = 0; i<n;i++){
		int a = s[i]-'0';
		v[i+1] = v[i]+a;
	}

	int res = 0;
	map<int,int>ls;
	int maxi = -1;
	for(int i = 0; i<n+1;i++){
		ls[v[i]]++;
		maxi = max(v[i],maxi);
	}
	if(k>0){
		for(int i = k;i<=maxi;i++){

			res+= ls[i-k]* ls[i];
		}

	}else{
		for(int i = k; i<=maxi;i++){
			res+=(ls[i]-1)*ls[i]/2;
		}
	}
	cout<<res<<endl;
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

