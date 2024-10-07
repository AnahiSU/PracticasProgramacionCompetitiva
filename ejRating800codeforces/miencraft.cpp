/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  

  int a,b;
  cin>>a>>b;
  vector<long long> rig (a), lef(a),arr(a);
  for(int i = 0; i<a; i++){
    cin>>arr[i];
    if(i==0){
        rig[i] = 0; lef[i] = 0;
    }else{
        long long res = arr[i-1]-arr[i];
        long long res1 = arr[i]-arr[i-1];
        //10 8 9 6 8 12 7

        //right to left
        if(res > 0){
            rig[i] = rig[i-1] + res;

        }else{
            rig[i] = rig[i-1];

        }
        //left to right
        if(res1 > 0){
            lef[i] = lef[i-1]+res;
        }else{
            lef[i] = lef[i-1];
        }
    }
  }

  while(b--){
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<abs(lef[n-1]) - abs(lef[m-1])<<"\n";
    }else{
        cout<<rig[m-1]-rig[n-1]<<"\n";
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