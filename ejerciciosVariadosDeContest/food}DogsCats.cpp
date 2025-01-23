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
    int c ; cin>>c;
    while(c--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        if(a>=x){
            x = 0;
        }else{
            x = x-a;
        }

        if(b>=y){
            y=0; 
        }else{
            y = y-b;
        }

        if(x>0 && y>0){
            if(c>x){
                c = c-x;
                if(c>=y){
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }else{
                cout<<"NO"<<"\n";
            }
        }else{
            if(x>0){
                if(c>=x){
                    cout<<"YES"<<"\n";
                }else{
                    cout<<"NO"<<"\n";
                }
            }else{
                if(y>0){
                    if(c>=y){
                        cout<<"YES"<<"\n";
                    }else{
                        cout<<"NO"<<"\n";
                    }
                }else{
                    cout<<"YES"<<"\n";
                }
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