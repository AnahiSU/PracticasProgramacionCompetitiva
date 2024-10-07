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
vector<bool>crib(1e7, 0);

void criba(){
    for(int i = 2; i<= 1e6; i++){
        if(crib[i]) continue;
        for(int j = 2*i; j<=1e6; j+=i){
            crib[j] = 1;
        }
    }
    crib[0] = 1; crib[1] = 1;crib[2] = 1;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    criba();
    int c;
    while(cin>>c){
        if(c == 0) break;

        int may = -1, y = 0, x = 0;
        for(int i = c-1; i>0; i--){
            x = i;
            y = c-i;
            if(!crib[x] && !crib[y]){
                cout<<c<<" = "<<min(x,y)<<" + "<< max(x,y)<<"\n";
                break;
            }else{
                x = 0; y = 0;
            }
        }
        if(x == 0 && y == 0) cout<<"Goldbach's conjecture is wrong."<<"\n";
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