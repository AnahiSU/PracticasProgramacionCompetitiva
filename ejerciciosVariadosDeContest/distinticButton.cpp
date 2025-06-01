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
    int c; cin>>c;
    while(c--){
        multimap<int, int> cor;
        set<char> moves;
        int n,xa,yb; cin>>n;
        xa = 0; yb = 0;
        while(n--){
            int x, y; cin>>x>>y;
            cor.insert(make_pair(x,y));
        }
 
        for(auto i : cor){
            if(i.first > xa){
                moves.insert('r');
            }else{
                if(i.first < xa){
                    moves.insert('l');
                }
            }
 
            if(i.second > yb){
                moves.insert('u');
            }else{
                if(i.second < yb){
                    moves.insert('d');
                }
                
            }
            
        }
        (moves.size()>3) ? cout<<"NO"<<"\n" : cout<<"YES"<<"\n";
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