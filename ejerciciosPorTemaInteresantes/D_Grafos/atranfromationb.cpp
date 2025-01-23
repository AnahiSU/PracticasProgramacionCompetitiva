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


signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,k; cin>>n>>k;
	set<int>visi;
	queue<pair<int,int>> q;
	q.push({n,1});
	visi.insert(n);
	map<int,int> pad;
	pad[n] = -1;
	pair<int,int>res = {0,0};
	while(!q.empty()){
		auto u = q.front();
		q.pop();
		if(u.first == k){
			visi.insert(k);
			res = u;
			break;
		}

		if(u.first*2<=k && visi.find(u.first*2) == visi.end()){
			q.push({u.first*2,u.second+1});
			pad[u.first*2] = u.first;
			visi.insert(u.first*2);
		}

		if((u.first*10)+1<=k && visi.find((u.first*10) +1) == visi.end()){
			q.push({(u.first*10)+1,u.second+1});
			pad[(u.first*10) +1] = u.first;
			visi.insert((u.first*10) +1);
		}
	}
	vector<int> cam;
	int x = k;
	if(visi.find(k) != visi.end()){
		cout<<"YES"<<endl;
		while(pad[x] != -1){
			cam.push_back(x);
			x = pad[x];
		}
		cam.push_back(n);
		reverse(cam.begin(),cam.end());
		cout<<(int)cam.size()<<endl;
		for(int i:cam){
			cout<<i<<" ";
		}
		cout<<endl;
	}else{
		cout<<"NO";
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

