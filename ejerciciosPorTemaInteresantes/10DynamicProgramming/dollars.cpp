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
int nums [] = {10000,5000,2000,1000,500,200,100,50,20,10,5};
vector<vector<int>>dp;
int n;

int cambiar(int pos, int mon){
	if(mon==n) return 1;
	if(pos==11) return 0; 
	if(dp[pos][mon] != -1) return dp[pos][mon];

	dp[pos][mon] = 0;
	if(mon+nums[pos] <= n) dp[pos][mon] = cambiar(pos,mon+nums[pos]);
	dp[pos][mon] += cambiar(pos+1,mon);

	return dp[pos][mon];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	double s;
	while(cin>>s && s!=0.00){
		double num = s*100;
		n = round(num);
		//cout<<n<<endl;
		dp.assign(14,vector<int>(n,-1));
		//por favor jubilen las I/O del uvaaaaaaaaaa me van a dejar calva
		cout<<setw(6)<<fixed<<setprecision(2)<<s;
		cout<<setw(17)<<cambiar(0,0)<<endl;
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

