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
        int a; cin>>a;
        vector<int> v(a);
        for(int i = 0; i<a; i++){
            cin>>v[i];
        }
        int conA = 0, conS = 0;
        for(int i = 0; i<a; i++){
            int x; cin>>x;
            if(x!=-1){
                if(v[i] != -1){
                    if(x < v[i]){
                        conA++;
                    }else{
                        if(x>v[i]){
                            conS++;
                        }
                    }
                }else{
                    conA++;
                }
                
            }else{

                if(v[i] != -1) conS++;
            }
            
        }
        if(conA>conS){
            cout<<"Alfredo"<<"\n";
        }else{
            if(conS>conA){
                cout<<"Saboya"<<"\n";
            }else{
                cout<<"Tie"<<"\n";
            }
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