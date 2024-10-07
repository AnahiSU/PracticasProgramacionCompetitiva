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
        vector <int> va, vb;
        int cont = 0;
        va.assign(a+1,-1);
        vb.assign(a+1,-1);
        
        for(int i = 0; i< a; i++){
            int f; cin>>f;
            va[i] = f;
        }
        for(int i = 0; i<a+1; i++){
            int f; cin>>f;
            vb[i] = f;
        } 

        for(int i = 0; i<a+1; i++){
            if(va[i] != -1){
                if(va[i] > vb[i]){
                    if(vb[a] >= vb[i] && va[i] >= vb[a]){
                        vb[a] = -1;
                        cont++;
                    }

                    cont+= va[i]-vb[i];
                }else{
                    if(vb[a] <= vb[i] && va[i] <= vb[a]){
                        vb[a] = -1;
                        cont++;
                    }
                    cont+= vb[i] - va[i];
                }
            }
        }
        if(vb[a] != -1){
            int cand = 0, min = 1e8;
            for(int i = 0; i<a; i++){
                if(abs(vb[a]-va[i]) < min){
                    min = abs(va[i]-vb[a]);
                    cand = va[i];
                }
            }
            cont++;
            cont+=min;
        }
        cout<<cont<<endl;

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