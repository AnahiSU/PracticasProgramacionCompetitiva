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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n; cin>>n;
	vector<int>v(2*n);
	int tot = 0;
	for(int i = 0; i<n;i++){
		int x;cin>>x;
		v[i] = v[i+n] = x;
		tot+=x;
	}

	int obj = tot/3,i=0,j=0;
	vector<bool>visi(n,false);
	int sum = v[0];
	int cont = 0;
	while(i<2*n && j<2*n){
		if(sum<obj){
			j++;
			sum+=v[j];
		}else if(sum>obj){
			sum-=v[i];
			i++;
		}else{
			if(!visi[i%n]){
				cont++#define int long long;
				visi[i%n] = true;
				sum-=v[i];
				i++;
			}else{
				sum-=v[i];
				i++;
			}
		}
	}

	cout<<cont/3<<endl;

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

