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
    ll n; cin>>n;
    vector<ll>fact;
    int cont = 0;
    for(int i = 1; i*i<=n;i++){
        fact.push_back(i*i);
    }

    for(int i =0 ; i<fact.size();i++){
        for(int j = 0; j<fact.size();j++){
            for(int k = 0; k<fact.size();k++){
                for(int l = 0; l<fact.size();l++){
                    if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) {
                        if(fact[i] + fact[j] + fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] + fact[j] + fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] + fact[j] - fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] + fact[j] - fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] - fact[j] + fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] - fact[j] + fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(fact[i] - fact[j] - fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                            
                        }
                        if(fact[i] - fact[j] - fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] + fact[j] + fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] + fact[j] + fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] + fact[j] - fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] + fact[j] - fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] - fact[j] + fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] - fact[j] + fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] - fact[j] - fact[k] + fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                        if(-fact[i] - fact[j] - fact[k] - fact[l] == n){
                            if (!(fact[i] == -fact[j] || fact[i] == -fact[k] || fact[i] == -fact[l] ||
                    fact[j] == -fact[k] || fact[j] == -fact[l] ||
                    fact[k] == -fact[l])) cont++;
                        }
                    }
                }
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