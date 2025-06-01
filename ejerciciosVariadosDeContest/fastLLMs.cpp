/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end())
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define sz(v) (int)v.size()

using namespace std;

int MOD = 1e9+7;

int power(int x, int y, int p) { 
    int res = 1;     
    x = x % p;  
    if (x == 0) return 0; 
    while (y > 0){  
        if (y & 1) 
            res = (res*x) % p; 

        y = y>>1;  
        x = (x*x) % p; 
    } 
    return res; 
}

int inv(int a) {
  return a <= 1 ? a : MOD - (long long)(MOD/a) * inv(MOD % a) % MOD;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,ind; cin>>n>>ind;
   vector<int>v(n);
   for(int i = 0; i<n;i++)cin>>v[i];

   int sum = 0;
   for(int i = 0; i<n;i++){
      sum += power(2LL,v[i],MOD);
      sum %= MOD;
   }
   int num = power(2LL,v[ind-1],MOD);
   cout<<(int)((num*inv(sum)) % MOD)<<endl;

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

