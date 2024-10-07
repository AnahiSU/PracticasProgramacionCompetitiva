/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;

vector<bool>crib(1e7, 0);
void criba(){
    for(int i = 2; i<= 1e6+1; i++){
        if(crib[i]) continue;
        for(int j = 2*i; j<1e6+1; j+=i){
            crib[j] = 1;
        }
    }
    crib[0] = 0; crib[1] = 0; crib[2] = 1;
}

signed main (){
  ios::sync_with_stdio(false);cin.tie(0);

  criba();
  vector<int>primos;
  for(int i = 0;i<=1e6+1;i++){
        if(!crib[i]){
          primos.push_back(i);
        }
  }
  int c; 
  while(cin>>c){
    int cont = 0;
    if(c){
      for(int i = 0; primos[i] <= c; i++){
        for(int j = i; primos[j] <=c ; j++){
          if(primos[i] + primos[j] <= c){
            cont++;
          }
        }
      }
      cout<<cont<<endl;
    }
    
  }
  
    
  
  
    return 0;
}

// 2  3  5  7  11 13 17 19 23 -> 24/2 = 12
// 22 21 19 17 13 11 7  5  1
// 7  6  5  3  1  0  0  0  0

// 2 3 5 7 -> 10
// 8 7 5 3
// 3 2 0 0

// 2  3  5  7 11 13 -> 15/2 = 7
// 13 12 10 8 4  2 
// 5  3  1  0 0  0

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