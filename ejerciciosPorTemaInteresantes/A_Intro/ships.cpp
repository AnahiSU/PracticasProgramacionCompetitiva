/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>

using namespace std;
void drawHor(int x,int y, char mat[10][10], int w){
    for(int i = 0; i<w; i++){
        mat[x][y+i] = '*';
    }
}
void drawVer(int y, int x, char mat[10][10], int w){
    for(int i = 0; i<w; i++){
        mat[x+i][y] = '*';
    }
}
signed main ()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    int c;cin>>c;
    bool res = true;
    char mat[10][10];
    while(c--){
        int a,b,c,d;
        
        cin>>a>>b>>c>>d;
        c--;
        d--;
        if(a == 0){
            if(d+b-1<10){
                if(mat[c][d] != '*'){
                    drawHor(c,d,mat,b);
                }else{
                    res = false;
                }
            }else{
                res = false;
            }
        }else{
            if(c+b-1<10){
                if(mat[c][d] != '*'){
                    drawVer(d,c,mat,b);
                }else{
                    res = false;
                }
            }else{
                res = false;
            }
        }
        
    }
    (res) ? cout<<'Y' : cout<<'N';

    return 0;
}


//            :-==-.                     .:..                   
//          .+%@@@@@@#-                -*%@@@@#+.                            
//        .%@@@@@@@@@@%*=--:.....::--+#@@@@@@@@@@@=              
//        +@@@@@@@%*-.                 .-*%@@@@@@@%              
//        +@@@@@%=.                       .=%@@@@@@.             
//        -@@@@*.                           .+@@@@%              
//         +@@+    ..                         =@@%:              
//          -*  :*%@@@*.             :+#%#+.   +#:               
//          =. =@@@*=+@%            :%@##@@@+  .+                
//          + -@@@@.  #@:  :-----   *@=  +@@@+  +                
//         .+ #@@@@#+*@%.  *@@@@%.  +@#:-#@@@@: =.               
//         .=  @@@@@@@@+    .=*:     :@@@@@@@@= -:                             
//          + :**%@%*:     .-=+--     :#@@%**+  +                
//          +.---:.                     .----- .=                                
//           :=                               +.                 
//              :=-.                     .-=:                                         
//                     .:-----------:.   