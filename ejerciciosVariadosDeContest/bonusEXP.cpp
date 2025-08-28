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
int n;
vector<int>v;
vector<vector<int>>dp;


int jugar(int pos, int num){
   bool st = num&1;
   if(pos==n-1) return ((num+1)&1) ? v[pos] : v[pos]*2;
   if(dp[pos][st]!= -1) return dp[pos][st];
   num++;
   int p = 0;
   if(num %2==0){
      p = v[pos] *2;
   }else{
      p = v[pos];
   }

   dp[pos][st] = max(jugar(pos+1, num) + p, jugar(pos+1,num-1));
   return dp[pos][st];
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   cin>>n;
   v.resize(n);
   dp.assign(n,vector<int>(2,-1));

   for(int i = 0; i<n;i++) cin>>v[i];
   
   cout<<jugar(0,0)<<endl;

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

