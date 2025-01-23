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
vector<int> prefixFunction(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	string s; cin>>s;
	vector<int>pi = prefixFunction(s);
	int n = (int)s.size();
	int prefB = 0;
	bool enco = 0;
	for(int i:pi){
		cout<<i<<" ";
	}
	cout<<endl;

	if(is_sorted(pi.begin(),pi.end())){
		if(pi[pi[n-1]] != 0){
			prefB = pi[pi[n-1]]-1;
			enco = 1;
		}	
	}else{
		prefB = pi[n-1];
		if(prefB != 0){
			for(int i = n-2;i>0;i++){
				if(pi[i] == prefB){
					enco = 1;
					break;
				}
			}
		}
	}
	if((int)s.size() == 2){
		cout<<"Just a legend";
	}else if(!enco) cout<<"Just a legend";
	else cout<<s.substr(0,prefB);
	
	cout<<endl;
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

