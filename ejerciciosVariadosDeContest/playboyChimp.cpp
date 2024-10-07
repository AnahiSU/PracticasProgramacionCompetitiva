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
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;
    
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int n; cin>>n;
    int ant = 0; vector<int> h;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x!= ant) h.push_back(x);
        ant = x;
    }
    int q; cin>>q;
    while(q--){
        int mono; cin>>mono;
        auto low = lower_bound(h.begin(),h.end(),mono);
        if(low != h.end()){
            //low existe
            if((*low) == mono){
                //low es una altura igual al mono
                // se verifica que no es el primero
                if(*(low) != h[0]){
                    cout<<*(--low)<<" ";
                }else{
                    cout<<'X'<<" ";
                }
            }else{
                //low es distinto a la altura del mono
                if(*low < mono){
                    cout<<*(low)<<" ";
                }else{
                    if(*(low) != h[0]){
                        cout<<*(--low)<<" ";
                    }else{
                        cout<<'X'<<"\n";
                    }
                }
            }
        }else{
            if(h.back() < mono){
                cout<<h.back()<<" ";
            }else{
                cout<<'X'<<" ";
            }
        }
        auto hig = upper_bound(h.begin(),h.end(),mono);
            if(hig != h.end()){
                cout<<*hig<<"\n";
            }else{
                cout<<'X'<<"\n";
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