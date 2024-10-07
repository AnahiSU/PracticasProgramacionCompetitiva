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
        vector<int> v (a);
        for(int i = 0; i<a; i++){
            cin>>v[i];
        }
        srt(v);
        vector<int> res;
        //i en el inicio, j en el medio mas 1
        bool sePudo = true;
        vector<int> aux, aux2;

        for(int i = 0; i<a; i++){
            if(i<(a/2)+1){
                aux.push_back(v[i]);
            }else{
                aux2.push_back(v[i]);
            }
        }
        for(int i = 0; i<aux.size(); i++){
            cout<<aux[i] << " ";
        }
        cout<<endl;
        for(int i = 0; i<aux2.size(); i++){
            cout<<aux2[i] << " ";
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