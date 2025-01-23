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
int n;
vector<vector<int>> dp;
int v [] = {50,25,10,5,1};

int cambio(int pos,int mon){
	if(mon == n){return 1;}
	if(dp[pos][mon] != -1) return dp[pos][mon];
	if(pos>4) return 0;
	dp[pos][mon] = 0;

	if(mon+v[pos]<=n) dp[pos][mon] += cambio(pos,mon+v[pos]);
	dp[pos][mon] += cambio(pos+1,mon);

	return dp[pos][mon];
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	dp.assign(6,vector<int>(1e4,-1));
	cout<<cambio(0,0)<<endl;

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

