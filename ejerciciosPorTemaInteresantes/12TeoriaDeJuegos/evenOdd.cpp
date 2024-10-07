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
    ll x; cin>>x;
    while(x--){
      ll n; cin>>n;
      vector<ll>nums(n);
      for(ll i = 0; i<n; i++){
        cin>>nums[i];
      }

      sort(nums.rbegin(),nums.rend());
      
      bool turno = true;
      ll ans = 0;
      for(int i = 0; i<n; i++){
        if(turno){
          if(nums[i] % 2 == 0){
            ans += nums[i];
          }
        }else{
          if(nums[i] % 2 != 0){
            ans-=nums[i];
          }
        }
        turno = !turno;
      }
      if(ans == 0) cout<<"Tie"<<"\n";
      else if(ans>0) cout<<"Alice"<<"\n";
      else cout<<"Bob"<<"\n";
      
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