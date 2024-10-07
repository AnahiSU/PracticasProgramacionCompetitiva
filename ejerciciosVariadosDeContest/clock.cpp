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
 
signed main ()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    int c;cin>>c;
    while(c--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> clock = {6,7,8,9,10,11,12,1,2,3,4,5};
        string comp;
        for(int i = 0; i<clock.size();i++){
            if(clock.at(i) == a){
                comp.push_back('P');
            }else{
                if(clock.at(i) == b){
                    comp.push_back('P');
                }else{
                    if(clock.at(i) == c){
                        comp.push_back('V');
                    }else{
                        if(clock.at(i) == d){
                            comp.push_back('V');
                        }
                    }
                }
            }
            if(comp.size() == 4){
                break;
            }
        }

        if(comp == "PVPV" || comp == "VPVP"){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
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