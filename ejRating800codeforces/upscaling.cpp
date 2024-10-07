/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>
using namespace std;
void draw(int n,int l){
    int a = 1; 
    while(a<=n){
        if(l%2!=0){
            if(a % 2 == 0){
                cout<<"..";
            }else{
                cout<<"##";
            }
        }else{
            if(a % 2 != 0){
                cout<<"..";
            }else{
                cout<<"##";
            }
        }
        
        a++;
    }
    cout<<"\n";

}


signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int x;
  cin>>x;
  while(x--){
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        draw(n,i);
        draw(n,i);
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