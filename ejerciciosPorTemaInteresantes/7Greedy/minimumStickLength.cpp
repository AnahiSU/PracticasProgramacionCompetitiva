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
    ll c; cin>>c;
    vector<ll> vi (c);
    for(int i = 0; i<c; i++){
        ll a; cin>>a;
        vi[i] = a;
    }
    srt(vi);
    

    ll piv = 0;
    ll pas = 0, pas2 = 0, pasR = 0;
    ll mid = (c/2);
    if(c == 1){
        pas = 0;
    }else{
        if(c%2 == 0){
            piv = vi[mid];
            for(int i = 0; i<c; i++){
                pas += abs(vi[i]-piv);
            }
            piv = vi[mid-1];
            for(int i = 0; i<c; i++){
                pas2 += abs(vi[i]-piv);
            }
            pasR = min(pas,pas2);
        }else{
            piv = vi[mid];
            for(int i = 0; i<c; i++){
                pasR += abs(vi[i]-piv);
            }
        }

        
        
    }
    cout<<pasR;
  
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