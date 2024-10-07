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

int c; 
vector<vector<int>> lis;
vector<vector<int>> h;

int actividad(int pos, int posAnt){
    if(h[pos][posAnt] != -1) return h[pos][posAnt]; //ya calculado
    if(pos == c-1){ //último día
        if(posAnt == 0){
            h[pos][posAnt] = max(lis[pos][1], lis[pos][2]);
        } else {
            if(posAnt == 1){
                h[pos][posAnt] = max(lis[pos][0], lis[pos][2]);
            }else{
                h[pos][posAnt] = max(lis[pos][0], lis[pos][1]);
            }
        
        }
        return h[pos][posAnt];
    }

    // cualquier día sin calcular
    if(posAnt == 0){
        h[pos][posAnt] = max(actividad(pos + 1, 1) + lis[pos][1], actividad(pos + 1, 2) + lis[pos][2]);
    }else{
        if(posAnt == 1){
            h[pos][posAnt] = max(actividad(pos + 1, 0) + lis[pos][0], actividad(pos + 1, 2) + lis[pos][2]);
        }else{
            h[pos][posAnt] = max(actividad(pos + 1, 0) + lis[pos][0], actividad(pos + 1, 1) + lis[pos][1]);
        }
    }
    return h[pos][posAnt];
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> c;
    lis.resize(c, vector<int>(3));
    
    for(int i = 0; i < c; i++){
        cin >> lis[i][0] >> lis[i][1] >> lis[i][2];
    }
    
    h.assign(c, vector<int>(3, -1));

    if(c == 1){
        int res = max(lis[0][0], lis[0][1]);
        res = max(res, lis[0][2]); 
        cout << res << endl;
    }else{
        int res = 0;
        
        res = actividad(1, 0) + lis[0][0];
        res = max(res, actividad(1, 1) + lis[0][1]);
        res = max(res, actividad(1, 2) + lis[0][2]);
        
        cout << res << "\n";
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