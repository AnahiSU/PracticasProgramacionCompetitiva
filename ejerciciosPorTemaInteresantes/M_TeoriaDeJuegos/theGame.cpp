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
vector<vector<int>>g;
vector<bool> visi;    
vector<int>dp;
int jugar(int pos){
    visi[pos] = true;
    if(g[pos].size()==0) return 0;
    if(dp[pos] != -1) return dp[pos];
    dp[pos] = 0;
    
    for(int i = 0; i<g[pos].size();i++){
        if(!visi[g[pos][i]]){
            if(jugar(g[pos][i]) == 0){
                dp[pos] = 1;
                break; 
            }    
        }
    }
    //cout<<"pos: "<<pos<<" "<<dp[pos]<<endl;
    return dp[pos];
}

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    while(c--){
        int n; cin>>n;
        dp.assign(n,-1);
        g.resize(n);
        visi.assign(n,false);
        for(int i = 0; i<n-1;i++){
            int a,b; cin>>a>>b;
            a--;b--;
            g[a].push_back(b);
            g[b].push_back(a);

        }
        bool perdi = true;
        int jug = jugar(0);
        //cout<<jug<<endl; 
        if(jug == 0){
            perdi = false;
        }
        if(perdi) cout<<"F";
        else cout<<"O";
        cout<<endl;
        g.clear();
        visi.clear();
        dp.clear();
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