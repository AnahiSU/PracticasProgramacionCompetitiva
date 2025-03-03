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
	int n, t; cin>>n>>t;
	vector<int>v(n);
	map<int,int>ls;
	for(int i = 0; i<n;i++){
		cin>>v[i];
		ls[v[i]]++;
	}

	srt(v);
	if(t == 1){
		for(int i = 0; i<n;i++){
			int l = i-1, r=n;
			while(r-l>1){
				int mid = (l+r)/2;
				if(v[mid] + v[i]<7777){
					l = mid;
				}else{
					r = mid;
				}
			 }
			if(v[i] + v[l]==7777 || v[i] + v[r] == 7777){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
		cout<<"No"<<endl;

	}else if (t == 2){
		(ls.size()==n) ? cout<<"Unique"<<endl : cout<<"Contains duplicate"<<endl;

	}else if(t==3){
		bool flag=0;
		for(auto p: ls){
			if(p.second > n/2){
				cout<<p.first<<endl;
				flag = 1;
			}
		}
		if(!flag) cout<<-1<<endl;

	}else if(t==4){
		if(n%2==0){
			cout<<v[(n/2)-1]<<" "<<v[n/2]<<endl;
		}else{
			cout<<v[n/2]<<endl;
		}
	}else{
		vector<int>res;
		for(int i = 0; i<n;i++){
			if(v[i] >=100 && v[i]<=999){
				res.push_back(v[i]);
			}
		}
		for(int i = 0; i<res.size();i++){
			cout<<res[i];
			if(i!=res.size()-1){
				cout<<" ";
			}
		}
		cout<<endl;
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

