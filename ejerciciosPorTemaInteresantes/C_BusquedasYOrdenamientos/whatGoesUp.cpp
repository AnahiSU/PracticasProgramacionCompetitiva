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

void printLis(int end,vector<int>&p, vector<int>&v){
	if(p[end] == -1) {cout<<v[end]<<endl;return;}
	printLis(p[end],p,v);
	cout<<v[end]<<endl;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	vector<int> v;
	int x;
	while(cin>>x){
		v.push_back(x);
	}
	int n = (int)v.size();
	int k=0,lie;
	vector<int>l(n,0),li(n,0),p(n,-1);
	
	for(int i = 0; i<n;i++){
		int pos = lower_bound(l.begin(),l.begin()+k,v[i]) - l.begin();
		l[pos] = v[i];
		li[pos] = i;
		p[i] = -1;
		if(pos){
			p[i] = li[pos-1];
		}
		if(pos == k){
			k=pos+1;
			lie = i;
		}
	}

	cout<<k<<endl;
	cout<<"-"<<endl;
	printLis(lie,p,v);

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

