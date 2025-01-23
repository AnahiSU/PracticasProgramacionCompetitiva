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
vector<bool> sieve(int n) {
   vector<bool> is_prime(n + 1, true);
   is_prime[0] = is_prime[1] = false;

   for (int i = 2; i <= n; i++) {
      if (!is_prime[i]) continue;
      for (int u = 2 * i; u <= n; u += i) {
         is_prime[u] = false;
      }
   }
   
   return is_prime;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c;cin>>c;
	vector<bool>criba = sieve(400001);
	while(c--){
		int n; cin>>n;
		
		vector<int>v,res;
		if(n<=4){
			cout<<-1<<endl;
		}else{
			for(int i = 1; i<=n;i++){
				v.push_back(i);
			}
			for(int i = 0; i<n;i++){
				if(v[i] %2!=0){
					res.push_back(v[i]);
				}
			}
		
			int ult = 0;
			if(n%2==0){
				ult = n-1;
			}else{
				ult = n;
			}

			bool flag = false;
			int num = 0;
			for(int i = 2; i<=n;i+=2){
			
					if(!criba[ult+i]){
						//es compuesto
						res.push_back(i);
						num = i;
						flag = true;
						break;
					}
				
			}
			if(!flag){
				cout<<-1<<endl;
			}else{
				for(int i = 2;i<=n;i+=2){
					if(i==num)continue;
					res.push_back(i);
				}
				for(int i : res){
					cout<<i<<" ";
				}
				cout<<endl;
			}

		}
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

