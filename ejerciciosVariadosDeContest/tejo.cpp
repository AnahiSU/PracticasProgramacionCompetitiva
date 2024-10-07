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
    int k; cin>>k;
    int a,b,c,d; cin>>a>>b>>c>>d;
    double dist = 1e8;
    char piv;
    vector<double>vR,vA;
    for(int i = 0; i<k; i++){
        int x,y;
        cin>>x>>y;
        if(sqrt(pow(c-x,2)+pow(d-y,2)) < dist){
            dist = sqrt(pow(c-x,2)+pow(d-y,2));
            piv = 'A';
        }
        vA.push_back(sqrt(pow(c-x,2)+pow(d-y,2)));
    }
    for(int i = 0; i<k; i++){
        int x,y;
        cin>>x>>y;
        if(sqrt(pow(c-x,2)+pow(d-y,2)) < dist){
            dist = sqrt(pow(c-x,2)+pow(d-y,2));
            piv = 'R';
        }
        vR.push_back(sqrt(pow(c-x,2)+pow(d-y,2)));
    }

    srt(vR); srt(vA);

    int cont = 0;

    if(piv == 'A'){
        for(int i = 0; i<vA.size();i++){
            if(vR[0] > vA[i]){
                cont++;
            }
        }
    }else{
        for(int i = 0; i<vA.size();i++){
            if(vA[0] > vR[i]){
                cont++;
            }
        }

    }
    cout<<piv<<" "<<cont<<"\n";
  
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