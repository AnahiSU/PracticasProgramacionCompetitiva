/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/

#include <bits/stdc++.h>
    
using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);cout << fixed;
  double n, l, ant = 0; cin>>n>>l;
  set<double> laterns,dife;
  for(int i = 0; i<n; i++){
    long double a; cin>>a;
    laterns.insert(a);
  }
  for(auto i:laterns){
    dife.insert((double)abs(i - ant));
    ant = i;
    
  }
  if(l!=ant){
    dife.insert((double)abs(l-ant));
  }
  

  if((*--dife.end())!=(double)abs(l-ant)){
    if(((*--dife.end()) / 2) > *dife.begin()){
        double r = (*--dife.end()) / 2;
        cout<< setprecision(10) <<r<<"\n";
    }else{
        double r = *dife.begin();
        cout<< setprecision(10) <<r<<"\n"; 
    }
  }else{
    double r = (*--dife.end());
    cout<<setprecision(10)<<r<<"\n";
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