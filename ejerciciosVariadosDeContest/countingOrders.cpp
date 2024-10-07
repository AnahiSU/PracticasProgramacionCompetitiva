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
    int c; cin>>c;
    ll MOD = 1e9 + 7;
    while(c--){
        ll n;
        cin>>n;
        vector<ll> v1(n),v2(n);
        for(int i = 0; i<n;i++){
            cin>>v1[i];
        }
        for(int i = 0; i<n;i++){
            cin>>v2[i];
        }
        ll res =1 ;
        srt(v1); srt(v2);
        bool flag = true;
        for(int i = 0; i<n;i++){
            if(v2[i] >= v1[i]) {
                cout<<0<<endl;
                flag = false; 
                break;   
            }
        }
        if(flag){
            for(int i = 0;i<n-1;i++){
                ll l = i, r = n-1;
                ll pos = 0;
                while(l <= r){
                    ll m = l +(r-l)/2;
                    if(v1[i] > v2[m]){
                        l = m+1;
                        pos = m;
                    }else{
                        r = m-1;
                    }
                }
                pos  = pos-i+1;
                res = ((res%MOD) *(pos % MOD)) %MOD;
            }
            cout<<res<<endl;
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