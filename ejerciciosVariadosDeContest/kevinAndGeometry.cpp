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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int c; cin>>c;
	while(c--){
		int n; cin>>n;
		map<int,int>ls;
		for(int i =0; i<n;i++){
			int x; cin>>x;
			ls[x]++;
		}
		vector<int>v;
		for(auto& i : ls){
			int num = i.first;
			int frec = i.second;
			frec %= 2;
			for(int j =0;j<frec;j++){
				v.push_back(num);
			}
			i.second -= frec;
		}
		
		for(int i: v){
			cout<<i<<" ";
		}
		cout<<endl;

		srt(v);
		int piv = 0;
		for(auto i:ls){
			cout<<i.first<<","<<i.second<<" ";
		}
		cout<<endl;
		if(ls.size() >= 2){
			cout<<"YES"<<endl;
		}else{
			auto aux = ls.begin();
			if((*aux).second > 2){
				cout<<"YES"<<endl;
			}else{
				auto aux = ls.begin();
				piv = (*aux).first;

				for(int i = 0; i<v.size() - 1 ;i++){
					if(abs(v[i]-v[i+1]) == 2*piv){
						cout<<"YES"<<endl;
						break;
					}
					if(i == v.size()-2){
						cout<<"NO"<<endl;
					}
				}
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

