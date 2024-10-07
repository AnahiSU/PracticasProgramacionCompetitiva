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
  int a,ind = 0;
  bool flag = true;
  set<string> lis;
  string ant;
  cin>>a;
  for(int i = 0; i<a; i++){
    string s;
    cin>>s;
    if(i == 0){
      ant = s;
      lis.insert(s);
    }else{
        if(lis.find(s) == lis.end()){
          if(s[0] != ant.back()){
              flag = false;
              ind = i+1;
              break;
          }
          ant = s;
          lis.insert(s);
        }else{
            flag = false;
            ind = i+1;
            break;
        }
    }
        
    }
  
  if(flag){
    cout<<"Fair Game";
  }else{
    if(ind%2 == 0){
        cout<<"Player 2 lost";
    }else{
        cout<<"Player 1 lost";
    }
    return 0;
    }
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