/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    string s; getline(cin,s);
    stack<char> pil;
    bool shift = 0;
    int costo = 0;
    for(int i = 0; i<s.size();i++){
        if(pil.empty()){
            if(isupper(s[i])) {
                costo+=2; shift=true;
            }else{
                costo++; shift = false;
            }
        }else{
            if(pil.top() != s[i]){
                if(s[i] - pil.top()==-32){
                    costo++;
                    shift = true;
                    pil.push(s[i]);
                    continue;
                }else{
                    if(s[i] - pil.top()==32){
                        shift = false;
                        pil.push(s[i]);
                        continue;
                    }
                }
                if(isupper(s[i])){
                    if(shift){
                        costo++;
                    }else{
                        costo+=2; shift = true;
                    }
                }else{
                    if(isalpha(s[i])){
                        shift = false;
                    }
                    costo++;
                }
            }
        }
        pil.push(s[i]);
    }
    cout<<costo<<"\n";
  
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