#include <bits/stdc++.h>
using namespace std;

int main() {
	int err; cin>>err;
	int c; cin>>c;
	string piv; cin>>piv;
	int cont = 0;
	while(c--){
		string s;cin>>s;
		int diff = s.size()-piv.size();
		if(diff <= err){
			err-=diff;
		}
		int tam = min((int)s.size(),(int)piv.size());
		bool cuenta = true;
		for(int i = 0;i<tam;i++){
			if(s[i] == piv[i]){
				err--; 
			}
			if(err<0){
				cuenta = false;
				break;
			}
		}
		if(cuenta) cont++;
		cuenta = true;
	}
	cout<<cont;
}
