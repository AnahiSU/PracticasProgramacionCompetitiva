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
vector<vector<int>> cortes; 
int cortar(int n, int m){
    if(n == m) return 0; //ya es un cuadrado
    if(cortes[n][m] != 1e6) return cortes[n][m]; //calculado
    if(n == 1) return m-1;
    if(m == 1) return n-1;
    
    for(int i = 1; i<n;i++){
        //todos los cortes en n de un pedazo mas el del otro pedazo
        cortes[n][m] = min(cortes[n][m], cortar(n-i,m) + cortar(i,m) + 1);
    }
    for(int i = 1; i<m;i++){
        //todos los cortes en m de un pedazo mas el del otro pedazo
        cortes[n][m] = min(cortes[n][m], cortar(n,m-i) + cortar(n,i) + 1);
    }

    return cortes[n][m];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int n,m; cin>>n>>m;
    cortes.assign(501, vector<int>(501, 1e6));
    int res = cortar(n,m);
    cout<<res;
  
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