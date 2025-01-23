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

int calc(int ant,int num,bool sec){
	dp[pos][sec] = min(calc(ls[num],ls[num]--,ls[num] = 0)
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int a;cin>>a;
	map<int,int>ls;
	for(int i = 0; i<a;i++){
		int x;cin>>x; 
		ls[i+1]+=x;
	}
	int cont = 1;
	for(int i = 1; i<=a;i++){
		if(ls[i] >1){
			if()cont++;
		}else if(ls[i] == 0){
			if(i==1)cont++;
			if(i!=1 && ls[i-1]!=0 &&i!=a)cont++;
		}
 
	}
	cout<<cont<<endl;
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

