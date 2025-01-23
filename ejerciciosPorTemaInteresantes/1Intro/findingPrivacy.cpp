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
	int k,n; cin>>k>>n;
	string res;
	int aux = n;
	if(k>n){
		cout<<'*'<<endl;
		return 0;
	}
	
	if(k!=1 && k == n){
		cout<<'*'<<endl;
		return 0;
	}

	while(n>0){
		int mid = n/2;

		if(k>mid){
			if(res.size()<aux-1){
				//X-
				res.push_back('X');
				res.push_back('-');
			}else res.push_back('X');
			k--;
			n-=2;
		}else if(k < mid && k!=0){
			//-X-
			res.push_back('-');
			res.push_back('X');
			res.push_back('-');
			k--;
			n-=3;
		}else if(k == mid && k!= 0){
			//-X
			res.push_back('-');
			res.push_back('X');
			k--;
			n-=2;
		}else if(k == 0){
			if(res.back() == 'X'){
				res.push_back('-');
				n--;
			}else{
				cout<<'*'<<endl;
				return 0;
			}
		}
	}	
	if(k>0){
		cout<<'*'<<endl;
		return 0;
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

