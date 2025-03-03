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
	int n,m; cin>>n>>m;
	vector<vector<int>>mat(n,vector<int>(m));
	int lim = n/2;
	if(n%2==0) lim++;
	for(int i = 0; i<n; i++){
		string s; cin>>s;
		bool found = 0;
		for(int j = 0; j<m;j++){
			mat[i][j] = (s[j] == 'T') ? 1e9 : 0;
			if(!found && s[j] == 'T'){
				mat[i][j] = 1;
				found = 1;
			}
			if(j<m-1 && s[j+1] != s[j] && s[j] == 'T'|| i == 0 && s[j] == 'T' || i == n-1 && s[j] == 'T'){
				mat[i][j] = 1;
			}
			if(j == m-1 && s[j]=='T'){
				mat[i][j] = 1;
			}
		}
	}



	vector<int> x = {-1,0,1,0};
	vector<int> y = {0,1,0,-1};
	int ring = -1;
	for(int i = 0; i<lim;i++){
		bool found = 0;
		int ind = m/2;
		if(m%2 != 0) ind++; 
		for(int j = 0; j<ind;j++){
			if(mat[i][j] == 0 || mat[i][j] == 1) continue;
			int mini = 1e9;
			for(int k = 0; k<4;k++){
				if(i + x[k] >= 0 && i + x[k] < n && j + y[k] >=0 && j+y[k]<m){
					if(mat[i+x[k]][j+y[k]] == 0){
						mini=0;
						break;
					}else{
						mini = min(mini,mat[i+x[k]][j+y[k]]);	
					}
				}
			}
			mat[i][j] = mini+1;
			ring = max(ring,mat[i][j]);
		}
		for(int j = m-1; j>=ind;j--){
			if(mat[i][j] == 0 || mat[i][j] == 1) continue;
			int mini = 1e9;
			for(int k = 0; k<4;k++){
				if(i + x[k] >= 0 && i + x[k] < n && j + y[k] >=0 && j+y[k]<m){
					if(mat[i+x[k]][j+y[k]] == 0){
						mini=0;
						break;
					}else{
						mini = min(mini,mat[i+x[k]][j+y[k]]);	
					}
				}
			}
			mat[i][j] = mini+1;
			ring = max(ring,mat[i][j]);
		}
	}
	for(int i = n-1; i>=lim;i--){
		bool found = 0;
		int ind = m/2;
		if(m%2 != 0) ind++; 
		for(int j = 0; j<ind;j++){
			if(mat[i][j] == 0 || mat[i][j] == 1) continue;
			int mini = 1e9;
			for(int k = 0; k<4;k++){
				if(i + x[k] >= 0 && i + x[k] < n && j + y[k] >=0 && j+y[k]<m){
					if(mat[i+x[k]][j+y[k]] == 0){
						mini=0;
						break;
					}else{
						mini = min(mini,mat[i+x[k]][j+y[k]]);	
					}
				}
			}
			mat[i][j] = mini+1;
			ring = max(ring,mat[i][j]);
		}
		for(int j = m-1; j>=ind;j--){
			if(mat[i][j] == 0 || mat[i][j] == 1) continue;
			int mini = 1e9;
			for(int k = 0; k<4;k++){
				if(i + x[k] >= 0 && i + x[k] < n && j + y[k] >=0 && j+y[k]<m){
					if(mat[i+x[k]][j+y[k]] == 0){
						mini=0;
						break;
					}else{
						mini = min(mini,mat[i+x[k]][j+y[k]]);	
					}
				}
			}
			mat[i][j] = mini+1;
			ring = max(ring,mat[i][j]);
		}
	}
	vector<vector<string>>res(n,vector<string>(m));
	for(int i = 0; i<n;i++){
		for(int j = 0; j<m;j++){
			string s = "";
			if(ring < 10) s.push_back('.');
			else if(mat[i][j] < 10){
				s.push_back('.');
				s.push_back('.');
			}else{
				s.push_back('.');
			}
			
			if(mat[i][j] == 0) s.push_back('.');
			else s = s + to_string(mat[i][j]);
			res[i][j] = s;
			s = "";
		}
	}

	for(int i = 0; i<n;i++){
		for(int j =0; j<m; j++){
			cout<<res[i][j];
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

