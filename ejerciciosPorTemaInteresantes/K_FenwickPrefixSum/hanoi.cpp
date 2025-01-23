/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/

#include <bits/stdc++.h>
    
using namespace std;

void hanoi(int n, int ori, int des, int aux){
    if(n == 1){
        cout<<ori<<" "<<des<<"\n";
    }else{
        hanoi(n-1,ori, aux, des);
        cout<<ori<<" "<<des<<"\n";
        hanoi(n-1,aux,des,ori);
    }
}

void contarHanoi(int n, int ori, int des, int aux,int& c){
    if(n == 1){
        c++;
    }else{
        contarHanoi(n-1,ori, aux, des,c);
        c++;
        contarHanoi(n-1,aux,des,ori,c);
    }
}

signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int n; cin>>n;
  int a = 1, b = 2, c = 3;
  int cont = 0;
  contarHanoi(n,a,c,b,cont);
  cout<<cont<<"\n";
  hanoi(n,a,c,b);
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