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
vector<int> prims;
int k,n;
vector<bool> criba(int n) {
   vector<bool> is_prime(n + 1, true);
   is_prime[0] = is_prime[1] = false;

   for (int i = 2; i <= n; i++) {
      if (!is_prime[i]) continue;
      for (int u = 2 * i; u <= n; u += i) {
         is_prime[u] = false;
      }
   }

	for(int i =0; i<=n;i++){
		if(is_prime[i]) prims.push_back(i);
	}
   
   return is_prime;
}
int dp[1121][15][1121];

int contar(int nums,int pos,int sum){
	if(nums == k && sum == n) return 1;
	if(nums == k) return 0;

	if(sum>n || prims[pos] > n) return 0;

	if(dp[sum][nums][pos] != -1) return dp[sum][nums][pos];
	
	dp[sum][nums][pos] = 0;	
	if(prims[pos]+sum <= n) dp[sum][nums][pos] += contar(nums+1,pos+1,sum+prims[pos]);
	dp[sum][nums][pos] += contar(nums,pos+1,sum);

	return dp[sum][nums][pos];
}


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);

	//dp.assign(1121,vector<int>(15,vector<int>(1211,1e8)));
	criba(2000);
		
	
	while(cin>>n>>k && n&&k){
		memset(dp,-1,sizeof dp);	
		cout<<contar(0,0,0)<<endl;
	}
    return 0;
}

//                   :-==-.                     .:..                  ! 
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

