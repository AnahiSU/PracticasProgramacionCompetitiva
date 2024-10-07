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
    ll c; cin>>c;
    while(c--){
        ll n,k;cin>>n>>k;
        ll l = k; ll r = k + n - 1;
        ll k1 = k+n-1;
        //cout<<k1<<endl;

        while(l < r){
          ll med = (l + r) /2;
          //cout<<"med: "<<med<<endl;
          ll sum1 = ((med * (med + 1)) - (k - 1) * k) / 2;
          //cout<<sum1<<" ";
          ll sum2 = ((k1 * (k1 + 1)) - (med - 1) * med) / 2;
          //cout<<sum2 <<" "<<endl;
          if(sum1 < sum2){
              l = med+1;
          }else{
              r = med;
          }
        }
        //cout<<l<<" "<<r<<endl;
        ll sum1 = abs((((l-1) * (l)) - (k - 1) * k) / 2 - ((k1 * (k1 + 1)) - (l - 1) * l) / 2) ;
        ll sum2 = abs((((l) * (l+1)) - (k - 1) * k) / 2- ((k1 * (k1 + 1)) - (l+1 - 1) * (l+1)) / 2);
        cout<<min(sum1,sum2)<<endl;
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