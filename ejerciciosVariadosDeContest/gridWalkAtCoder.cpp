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
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int h,w; cin>>h>>w;
    int x,y; cin>>x>>y;
    x--;y--;

    vector<vector<char>> mat (h,vector<char>(w));
    for(int i = 0; i<h ; i++){
        for(int j = 0; j<w; j++){
            cin>>mat[i][j];
        }
    }

    string s; cin>>s;
    int i = 0;
    while(i<s.size()){
        if(s[i] == 'D'){
            if(x+1 < h && x >= 0 && mat[x+1][y] == '.'){
                x++;
            }

        }else if(s[i] == 'U'){
            if(x-1 < h && x-1 >= 0 && mat[x-1][y] == '.'){
                x--;
            }

        }else if(s[i] == 'L'){
            if(y-1 < w && y-1 >= 0 && mat[x][y-1] == '.'){
                y--;
            }

        }else{
            if(y+1 < w && y+1 >= 0 && mat[x][y+1] == '.'){
                y++;
            }
        }
        i++;
    }
    cout<<x+1<<" "<<y+1<<"\n";
  
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