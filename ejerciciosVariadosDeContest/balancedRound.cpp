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
  int c; cin>>c;
  while(c--){
    int a,k; cin>>a>>k;
    vector<int>lis;
    for(int i = 0; i<a; i++){
        int b;cin>>b;
        lis.push_back(b);
    }

    sort(lis.begin(),lis.end());
    int cont = 1,ant = 0;
    set<int> tam;
    for(int i = 0; i<a; i++){
        if(i > 0){
            if(abs(ant-lis.at(i))<=k){
                cont++;
                ant = lis.at(i);
            }else{
                tam.insert(cont);
                cont = 1;
                ant = lis.at(i);
            }
        }else{
            ant = lis.at(i);
        }
    }
    tam.insert(cont);
    int tama = *(--tam.end());
    cout<<abs(a-tama)<<"\n";
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