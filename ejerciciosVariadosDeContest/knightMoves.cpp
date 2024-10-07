/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;
//vector<vector<int>>tab(8,vector<int>(8),0);
//vector<vector<int>> g(8);
bool valid(int i, int j){
    return i<8 && i>-1 && j<8 && j>-1;
}

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    string ini,fin;
    while(cin>>ini>>fin){
        int posX = ini[0]-97;
        int posY = ini[1]-'0' - 1;
        int posFX = fin[0]-97;
        int posFY = fin[1]-'0' -1;

        queue<pair<pair<int,int>,int>> cola;
        cola.push({{posX,posY},0});
        while(!cola.empty()){
            pair<pair<int,int>,int> act = cola.front();
            cola.pop();

            int actX = act.first.first;
            int actY = act.first.second;
            if(actX == posFX && actY == posFY){
              cout<<"To get from "<<ini<<" to "<<fin<<" takes "<<act.second<<" knight moves."<<endl;
              break;
            }
            if(valid(actX-2,actY-1)) cola.push({{actX-2,actY-1},act.second+1});
            if(valid(actX-1,actY-2)) cola.push({{actX-1,actY-2},act.second+1});
            if(valid(actX-2,actY+1)) cola.push({{actX-2,actY+1},act.second+1});
            if(valid(actX-1,actY+2)) cola.push({{actX-1,actY+2},act.second+1});
            if(valid(actX+1,actY+2)) cola.push({{actX+1,actY+2},act.second+1});
            if(valid(actX+2,actY+1)) cola.push({{actX+2,actY+1},act.second+1});
            if(valid(actX+2,actY-1)) cola.push({{actX+2,actY-1},act.second+1});
            if(valid(actX+1,actY-2)) cola.push({{actX+1,actY-2},act.second+1});
        }


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