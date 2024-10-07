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
#define ll int    
#include <bits/stdc++.h>
using namespace std;

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,k; cin>>n>>m>>k;
    vector<int>deps(m),per(n);
    for(int i = 0; i<n; i++){
        cin>>per[i];
    }
    srt(per);
    for(int i = 0; i<m;i++){
        cin>>deps[i];
    }
    srt(deps);
    int cont = 0;
    int i = 0, j=0;
    while(i<n && j<m){
        if(deps[j] <= per[i]+k && per[i]-k <= deps[j]){
            j++;
            i++;
            cont++;
        }else{
            if(deps[j] > per[i]){
                i++;
            }else{
                j++;
            }
        }
    }
    
    cout<<cont<<endl;

  
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