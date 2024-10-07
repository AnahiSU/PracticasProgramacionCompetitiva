/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#define srtR(a) sort(a.rbegin(),a.rend());
    
#include <bits/stdc++.h>
using namespace std;
    
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int n; cin>>n;
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(a >=11)  a = 10;
    if(b >= 11) b = 10;
    if(c >= 11) c = 10;
    if(d >= 11) d = 10;
    int john = a+b;
    int mary = c+d;
    a--;b--;c--;d--;
    vector<int> cards (13,0);
    cards[a]++;
    cards[b]++;
    cards[c]++;
    cards[d]++;

    for(int i = 0; i<n; i++){
        int x; cin>>x;
        x--;
        cards[x]++;
        x++;
        if(x>=11){
            x = 10;
        }
        mary+=x;
        john+=x;
        
    }
    bool breakeado = false;
    for(int i = 0; i<13;i++){
        int value = i+1;
        if(i >=10){
            value = 10;  
        }
        mary += value;
        john += value;

        if(cards[i] < 4){
            //carta jugable
            if(mary>=john){
                if(mary == 23){
                    cout<<i+1<<"\n";
                    breakeado = true;
                    break;
                } 
            }else if(john > 23 && mary <= 23){
                cout<<i+1<<"\n";
                breakeado = true;
                break;
            }
            
        }
        
        mary-= value;
        john-= value;
    }
    if(!breakeado) cout<<-1<<"\n";
    
        
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