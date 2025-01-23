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
vector<int>moves;
string s;

char jugar(int pos){
    //caso de que ya se sabe
    if(s[pos-1] != '?') return s[pos-1];

    //caso base trolo 
    for(int i = 0; i<moves.size();i++){
        if(pos-moves[i] == 0){
            s[pos-1] = 'W';
            return 'W';
        } 
    }
    
    bool win = false;
    for(int i = 0; i<moves.size();i++){
        if(pos-moves[i] > 0){
            if(jugar(pos-moves[i]) == 'L'){
                win = true;
            }
        }
    }
    if(win){
        s[pos-1] = 'W';
    }else{
        s[pos-1] = 'L';
    }
    return s[pos-1];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int n, k; cin>>n>>k;
    moves.resize(k);
    for(int i = 0; i<k;i++){
        cin>>moves[i];
    }
    s.assign(n,'?');
    for(int i = n; i>0;i--){
        jugar(i);
    }
    
    
    cout<<s<<"\n";

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