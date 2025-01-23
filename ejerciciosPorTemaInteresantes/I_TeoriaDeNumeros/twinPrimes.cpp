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
vector<bool>crib(2e7, 0);

void criba(){
    for(int i = 2; i< 2e7; i++){
        if(crib[i]) continue;
        for(int j = 2*i; j<2e7; j+=i){
            crib[j] = 1;
        }
    }
    crib[0] = 1; crib[1] = 1;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c;
    criba();
    vector<pair<int,int>> v;
    for(int i = 0; i < 2e7; i++){
        if(!crib[i] && !crib[i+2]){
            v.push_back(make_pair(i,i+2));
        }
    }
    while(cin>>c){
        cout<<"("<<v[c-1].first<<", "<<v[c-1].second<<")"<<"\n";
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