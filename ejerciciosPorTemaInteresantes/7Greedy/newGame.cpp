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
	int c; cin>>c;
	while(c--){
		int n,r; cin>>n>>r;
		map<int,int>cards;
		
		for(int  i=0;i<n;i++){
			int x;cin>>x;
			cards[x]++;
		}
		
		vector<pair<int,int>> v;
		for(auto i: cards){
			v.push_back({i.first,i.second});
		}
		//for(auto i:v){
		//	cout<<i.first<<" "<<i.second<<" , ";
		//}	
		//cout<<endl;
		int i=0,j=1;
		int res = v[0].second,sum = v[0].second;
		while(i<(int)v.size() && j<(int)v.size()){
			if(abs(v[j-1].first - v[j].first) == 1){	
				if(abs(j-i)+1 <= r){
					sum+=v[j].second;
					j++;
				}else{
					sum-=v[i].second;
					i++;
				}	
			}else{	
				i=j;
				j++;
				sum=v[i].second;
			}

			res = max(sum,res);
		}
		
		cout<<res<<endl;
		
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

