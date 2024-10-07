/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;

vector<vector<int>> dp;

bool esValida(int x, int y, auto &lab){
    return (x<lab.size() && y<lab[0].size() && x>=0 && y>=0 && lab[x][y] != '#' && lab[x][y] != '$');
}

bool esSalida(int x, int y, auto &lab){
    return (lab[x][y] == '+'  || lab[x][y] == 'X') && (x == lab.size()-1 || y == lab[0].size()-1 || x == 0 || y == 0);
}

int explorar(int x, int y, auto &lab){
    if(dp[x][y] < 1e9) return dp[x][y];
    if(esValida(x,y,lab)){
        
        if(esSalida(x,y,lab)){
            lab[x][y] = '+';
            
            for(int i = 0; i<lab.size();i++){
                for(int j =0; j<lab[0].size();j++){
                    cout<<lab[i][j]<<" ";
                }
                cout<<endl;
            }
            
            cout<<"-------------------"<<endl;
        
            return 0;
        }
        lab[x][y] = '$';
        dp[x][y] = min(1 + explorar(x-1,y, lab), min(1 + explorar(x,y+1, lab), min( 1+ explorar(x+1,y,lab), 1 + explorar(x,y-1,lab))));
        lab[x][y] = '+';
    }else{
       
        return 1e9;
    }
    
    return dp[x][y];
}   

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int x,y;
    while(cin>>y>>x){
        if(!x&&!y) break;
        dp.assign(1e4+1,vector<int>(1e4+1,1e9));
        vector<vector<char>> lab(x,vector<char>(y));
        int posX = 0, posY = 0;
        for(int i = 0; i<x; i++){
            for(int j = 0; j<y; j++){
                cin>>lab[i][j];
                if(lab[i][j] == 'X'){
                    posX = i;
                    posY = j;
                }
            }
        }

        int res = explorar(posX, posY,lab);
        (res >= 1e9) ? cout<<-1<<"\n" : cout<<res<<"\n";


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