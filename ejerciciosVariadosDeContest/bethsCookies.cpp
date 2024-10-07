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
    int c; cin>>c;
    string s; cin>>s;
    
    stack<int> res;
    stack<char> op;
    char ant;

    for(int i = 0; i<c; i++){
        if(i == 0){
            op.push(s[i]);
            ant = s[i];
        }else{
            if(s[i] == '('){
                if(ant == s[i]){
                    //caso ((
                    op.push(s[i]);
                    ant = '(';
                }else{
                    //caso )(
                        op.push('*');
                        op.push(s[i]);
                        ant = '(';
                }
            }else{
                if(ant == s[i]){
                    //caso ))
                    while(op.top()!='('){
                        if(op.top() == '*'){
                            int aux = res.top();
                            res.pop();
                            int aux2 = res.top();
                            res.pop();
                            int r = aux*aux2;
                            res.push(r);
                        }else{
                            int a = res.top();
                            res.pop();
                            a++;
                            res.push(a);
                        }
                        op.pop();
                    }
                    op.pop();
                    int a = res.top();
                    res.pop();
                    a++;
                    res.push(a);
                    ant = ')';
                }else{
                    //caso ()
                    op.pop();
                    res.push(1);
                    ant = ')';
                }
            }
        }
        
        ant = s[i];
        
    }

    while(!op.empty()){
        if (op.top() == '*'){
            int aux = res.top();
            res.pop();
            int aux2 = res.top();
            res.pop();
            int r = aux * aux2;
            res.push(r);
        }
        else{
            int a = res.top();
            res.pop();
            a++;
            res.push(a);
        }
        op.pop();
    }

    cout<<res.top();
  
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