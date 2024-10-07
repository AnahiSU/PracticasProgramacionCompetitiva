/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
#include <bits/stdc++.h>
#define srtR(a) sort((a).rbegin(),(a).rend())
#define srt(a) sort((a).begin(),(a).end())
#define int long long 
typedef long long ll;

using namespace std;

int MOD = 1e9+7;
int fact[200005];
int invfact[200005];

int binpow(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
 
int inversoFermat(int a, int m){
    return binpow(a, m-2, m);
}
 
void proce(){
     fact[0] = fact[1] = 1;
     invfact[0] = invfact[1] = inversoFermat(1, MOD);
     for(int i = 2; i <= 200004; i++){
         fact[i] = i*fact[i-1]%MOD;
         invfact[i] = inversoFermat(fact[i], MOD);
     }
}

int nCk(int n, int k){
    if(k == n) return 1;
    if(k > n) return 0;
    int res = fact[n] * invfact[n-k] % MOD * invfact[k] % MOD;
    return res;
}
    
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);

    proce();

    int c; cin>>c;
    while(c--){
        int n, k; cin>>n>>k;
        int cer = 0,un = 0;
        for(int i = 0; i<n;i++){
            int x; cin>>x;
            ((x==0) ? cer++ : un++);
        }
        int combCero = 0; 
        int med = (k/2) +1;
        //cout<<"ceros: "<<cer<<" "<<"unos: "<<un<<endl;
        //cout<<med<<endl;
        for(int i = med; i<=k && i<=cer ; i++){
            int aux = nCk(cer,i);
            int aux2 = nCk(un,k-i);
            
            combCero += aux * aux2 % MOD;
            
        }
        
        int tot = (((nCk(n,k) - combCero) % MOD)+MOD)%MOD;
        
        cout<<tot<<endl;
    }
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