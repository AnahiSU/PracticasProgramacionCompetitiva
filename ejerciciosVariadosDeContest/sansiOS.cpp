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
	string s; cin>>s;
	string res;
	res.push_back(s[0]);
	for(int i = 1;i<s.size();i++){
		if(s[i] == '/'){
			
			if(s[i-1] != '/'){
				res.push_back(s[i]);
			}
		}else{
			res.push_back(s[i]);
		}
	}
	int n = res.size();
	if(res.size()>1){
		for(int i = res.size()-1;i>=0;i--){
			if(res[i] == '/'){
				n--;
			}else{
				break;
			}
		}	
		for(int i = 0;i<n;i++){
			cout<<res[i];
		}
	}else{
		cout<<res;
	}	

	cout<<endl;
    return 0;
}
