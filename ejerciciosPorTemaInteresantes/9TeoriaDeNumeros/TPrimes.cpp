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

vector<bool>crib(1e6+1, 0);

void criba(){
    for(int i = 2; i< 1e6+1; i++){
        if(crib[i]) continue;
        for(int j = 2*i; j<1e6+1; j+=i){
            crib[j] = 1;
        }
    }
    crib[0] = 1; crib[1] = 1;
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    criba();
    ll c; cin>>c;
    while(c--){
        ll a; cin>>a;
        ll srt = sqrt(a);
        if(srt*srt == a){
            (!crib[sqrt(a)]) ? cout<<"YES" : cout<<"NO";
        }else{
            cout<<"NO";
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