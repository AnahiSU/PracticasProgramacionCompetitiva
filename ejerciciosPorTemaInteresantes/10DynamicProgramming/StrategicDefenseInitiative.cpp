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
vector<int>v,dp,res;
int n;
int misiles(int pos){
	if(pos==n-1) return 1;
	if(dp[pos] != -1) return dp[pos];
	dp[pos] = 1;
	for(int i = pos+1;i<n;i++){
		if(v[pos] < v[i]){
			 //cout<<i<<endl;
		//	dp[pos] = max(dp[pos],misiles(i)+1);
			int aux = misiles(i)+1;
			if(aux > dp[pos]){
				 dp[pos] = aux;
				 res[pos] = i;
			}
		}
	}
	return dp[pos];
	
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c;cin>>c;
	cin.ignore();cin.ignore();
	bool flag = 0;
	while(c--){
		if(flag) cout<<endl;
		string s;
		v.clear();
		while(getline(cin,s)&&s!=""){
			int x = stoi(s);
			v.push_back(x);
		}
		n = (int)v.size();
		dp.assign(n,-1);
		res.assign(n,-1);
		int resp = -1;
		for(int i = 0; i<n;i++){
			 resp = max(resp,misiles(i));
		 }
		cout<<"Max hits: "<<resp<<endl;
		int ind = 0;
		for(int i = 0; i<n;i++){
			 if(dp[i] == resp){
				 ind = i; 
				 break;
			 }
		}
		while(ind != -1){
			 cout<<v[ind]<<endl;
			 ind = res[ind];
		 }


		flag = 1;
		
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

