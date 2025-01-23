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
  int c;
  cin>>c;
  while(c--){
    int n; cin>>n;
    deque<char> col;
    while(n--){
        char a;
        cin>>a;
        col.push_back(a);
    }
    string res = "";
    set<string> lis;

    while(!col.empty()){
        if(res.size() == 0){
            res.push_back(col.front());
            col.pop_front();
            res.push_back(col.front());
            col.pop_front();
        }else{
            if(res.size() == 2){
                lis.insert(res);
                char aux = res.back();
                res.clear();
                res.push_back(aux);
            }else{
                res.push_back(col.front());
                col.pop_front();
            }
        }
    }

    if(lis.find(res)==lis.end()){
        lis.insert(res);
    }
    cout<<lis.size()<<"\n";
    
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
           
//                    :=-.                     .-=:                                         
//                           .:-----------:.   