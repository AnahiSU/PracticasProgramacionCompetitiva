/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#define rvs(a) reverse(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    vector<bool> vis;
    while(c--){
        int n; cin>>n;
        vis.clear();
        vis.assign(26,false);
        string ori,trat;
        cin>>ori;
        for(int i = 0;i<n;i++){
            if(!vis.at(ori[i]-97)){
                trat.push_back(ori[i]);
                vis.at(ori[i]-97) = true;
            }
        }


        map<char,char> chr;
        
        srt(trat);
        string aux = trat;
        
        rvs(aux);
        

        for(int i = 0; i<trat.size();i++){
            chr[trat[i]] = aux[i];    
        }
        

        string res;
        for(int i = 0; i<n; i++){
            char k = (*chr.find(ori[i])).second;
            res.push_back(k);
        }
        cout<<res<<"\n";

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