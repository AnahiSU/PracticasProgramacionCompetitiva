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
        int a,b, may = -1e7+1, fil = -1, cont = 0, pr =-1, col = -1; cin>>a>>b;
        char arr [a][b];
        for(int i = 0; i<a; i++){
            for(int j = 0; j<b;j++){
                char c;cin>>c;
                if(c == '#'){
                    cont++;
                    if(pr == -1){
                        pr = j;
                    }
                }
                arr[i][j] = c;
            }
            if(cont > may){
                fil = i;
                col = pr;
                may = cont;
            }
            cont = 0;
            pr = -1;
        }
        fil++;
        col++;
        if(cont == 1){
            cout<<fil<<" "<<col<<"\n";
        }else{
            cout<<fil++<<" "<<col +(may/2)<<"\n";
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