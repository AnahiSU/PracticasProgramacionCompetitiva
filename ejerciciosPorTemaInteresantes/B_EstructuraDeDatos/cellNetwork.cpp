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
  int n,m;
  cin>>n>>m;
  vector<long long> cities,towers;
  towers.push_back(-3e9);
  for(int i = 0; i<n; i++){
    long long a;
    cin>>a;
    cities.push_back(a);
  }
  for(int i = 0; i<m; i++){
    long long a;
    cin>>a;
    towers.push_back(a);
  }
  towers.push_back((3e9));

  int i=0, max = -1;
  while(i<cities.size()){
    if(lower_bound(towers.begin(),towers.end(),cities.at(i)) != towers.end()){
      long long act = (*lower_bound(towers.begin(),towers.end(),cities.at(i)))-cities.at(i);
      long long act1 =  cities.at(i)-(*(--lower_bound(towers.begin(),towers.end(),cities.at(i))));
          if(act1<act){
            if(max<act1){
                max = act1;
            } 
          }else{
            if(max<act){
                max = act;
            } 
          }
          i++;
    }else{
      long long act = abs(cities.at(i) - towers.front());
      long long act1 = abs(cities.at(i) - towers.at(1));
      if(act1<act){
            if(max<act1){
                max = act1;
            } 
          }else{
            if(max<act){
                max = act;
            } 
          }
          i++;
    }
  
  }
  cout<<max;
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
//                    :=-.                     .-=:                                         
//                           .:-----------:.   
