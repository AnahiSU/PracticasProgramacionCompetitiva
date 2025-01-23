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

bool esVal(int x, int y,int n, int m, const vector<string>& mat){
	return x<n && y<m && x>=0 && y>=0 
			&& mat[x][y] != '#';
}
signed main (){
	std::ios::sync_with_stdio(false);cin.tie(0);
	int n,m; cin>>n>>m;
	vector<string>mat(n);

	for(int i = 0; i<n;i++){
		cin>>mat[i];
	}
	pair<int,int> source,sink;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(mat[i][j] == 'A'){
				source = {i,j};
			}
			if(mat[i][j] == 'B'){
				sink = {i,j};
			}
		}
	}
	
	queue<pair<int,int>> q;
	q.push(source);
	vector<vector<bool>> visi(n,vector<bool>(m,false));
	vector<vector<char>> pad(n,vector<char> (m,'$'));
	pad[source.first][source.second] = '?';
	visi[source.first][source.second] = true;
	vector<int> dx={-1,0,1,0};
	vector<char> dir = {'U','R','D','L'};
	vector<int> dy={0,1,0,-1};
	

	while(!q.empty()){
		auto p = q.front();
		q.pop();
		for(int i =0; i<4;i++){
			int posx = p.first+dx[i];
			int posy = p.second+dy[i];
			if(esVal(posx,posy,n,m,mat) && !visi[posx][posy]){
				visi[posx][posy] = true;
				q.push({posx,posy});
				pad[posx][posy] = dir[i];
			}
		}
	}
	string cam = "";
	if(visi[sink.first][sink.second]){
		int x = sink.first;
		int y = sink.second;
		
		while(pad[x][y] != '?'){
			cam.push_back(pad[x][y]);
			if(pad[x][y] == 'R'){
				x = x+dx[3];
				y = y+dy[3];
			}else if(pad[x][y] == 'L'){
				x += dx[1];
				y += dy[1];
			}else if(pad[x][y] == 'U'){
				x += dx[2];
				y += dy[2];
			}else{
				x += dx[0];
				y += dy[0];
			}
		}
	}

	if(!visi[sink.first][sink.second]) cout<<"NO";
	else{
		cout<<"YES"<<endl;
		cout<<(int)cam.size()<<endl;	
		for(int i = (int)cam.size()-1; i>=0;i--){
			cout<<cam[i];
		}
	}
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

