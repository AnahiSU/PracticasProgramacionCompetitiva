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
        ll n; cin>>n;
        vector<pair<ll,ll>>ps(n);
        for(int i = 0; i<n;i++){
            ll x; cin>>x;
            ps[i].first = x;
            ps[i].second = i;
        }
        srt(ps);
        vector<ll> sums(n+1);
        for(int i = 0; i<n;i++){
            sums[i+1] = sums[i] + ps[i].first;
        }
        vector<ll> res(n);
        for(int i = 0; i<n;i++){
            ll piv = ps[i].first;
            res[ps[i].second] = n+piv*(2*(i+1)-n) - (sums[i+1]-sums[0]) + (sums[n] - sums[i+1]);
        }
        for(ll i : res){
            cout<<i<<" ";
        }
        cout<<endl;
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