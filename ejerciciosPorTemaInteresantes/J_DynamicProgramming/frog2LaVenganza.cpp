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
int n, k;
int saltar(int pos){
    if(pos == n-1) return 0;
    if(h[pos] != 1e9) return h[pos];

    h[pos] = saltar(pos+1) + abs(alt[pos] - alt[pos+1]) ;

    for(int i = 2; i<=k; i++){
        if(pos+i < n){
            h[pos] = min(h[pos], saltar(pos+i) + abs(alt[pos] - alt[pos+i]) ); 
        }else{
            break;
        }
    }
    return h[pos];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>k;
    for(int i = 0; i<n; i++){
        int c;
        cin>>c;
        alt.push_back(c);
    }
    h.assign(n,1e9);
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