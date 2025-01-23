/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
vector<int> h, alt;
int n;

int saltar(int pos){
    
    if(pos == n-1) return 0; //caso base que ya llegó
    if(h[pos] != -1) return h[pos]; //ya se calculó
    if(pos+2 >= n){
        h[pos] = abs(alt[pos] - alt[pos+1]);
        return h[pos];
    } 

    //calcula si no esta en el arreglo
    h[pos] = saltar(pos+1) + abs(alt[pos] - alt[pos+1]);
    h[pos] = min(saltar(pos+2) + abs(alt[pos]-alt[pos+2]), h[pos]);
     //memoriza

    return h[pos];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    for(int i = 0; i<n; i++){
        int c;
        cin>>c;
        alt.push_back(c);
    }
    h.assign(n,-1);
    int pos = 0;
    int res = saltar(pos);
    
    cout << res;
  
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