/*
- Siempre de frente.
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

vector<pair<int,int>>v;
map<pair<int,int>,int>dp;
int n;

bool cmp (pair<int,int> a, pair<int,int>b){
   return (a.first + a.second) > (b.first+b.second);
}


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int r; cin>>n>>r;
   
   vector<pair<int,int>>posi,neg;
   for(int i = 0; i<n;i++){
      int a ,b; cin>>a>>b;
      if(b>=0){
         posi.push_back({a,b});
      }else{
         neg.push_back({max(a,abs(b)),b});
      }
   }

   srt(posi);
   sort(neg.begin(),neg.end(),cmp);

   int cont = 0;
   for(int i = 0; i<sz(posi);i++){
      if(posi[i].first <= r){
         r+=posi[i].second;
         cont++;
      }
   }
   for(auto i : neg) v.push_back(i);

   vector<vector<int>>dp(sz(v)+1,vector<int>(r+1,0));
   dp[0][r] = cont;

   for(int i = 0; i<sz(v); i++){
      for(int j = 0; j<=r;j++){
         if(j>=v[i].first && j+v[i].second >= 0){
            dp[i+1][j+v[i].second] = max(dp[i+1][j+v[i].second],dp[i][j]+1);
         }
         dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
      }
   }
   int res = 0;
   for(int j = 0; j<=r;j++){
      res=max(res,dp[sz(v)][j]);
   }
   cout<<res<<endl;

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

