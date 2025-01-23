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

int MOD = 1e9+7;

int bino[51][51];
void init()
{
    for(int i = 0; i < 51; i++) 
        bino[i][0] = 1;
    for(int i = 1; i < 51; i++) 
        for(int j = 1; j < 51; j++) 
            bino[i][j] = (bino[i - 1][j] + bino[i - 1][j-1]);
}

int contar(int tp, auto v,int k, int n){

	int tom = 0;
	int res = 0;
	for(int i = 0; i<n;i++){
		if(tom+v[i] <= tp){
			tom+=v[i];
			res+= bino[n-i-1][k];
			if(k==0)return res;
			k--;
		}
		
	}
	if(!k && tom <= tp) res++;
	return res;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	init();
	int n,k; cin>>n>>k;
	int tom=0;
	vector<int>v(n);
	for(int i = 0; i<n;i++){
		cin>>v[i];
	}
	sort(v.rbegin(),v.rend());
	int a,b; cin>>a>>b;

	int res = contar(b,v,k,n);
	res -= contar(a-1,v,k,n);
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

