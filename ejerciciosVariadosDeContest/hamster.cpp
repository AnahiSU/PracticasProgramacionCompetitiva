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


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m; cin>>n>>m;
   vector<vector<int>>v(n,vector<int>(m));

   int sum = 0,sum2=0;
   for(int i =0;i<n;i++){
      for(int j = 0; j<m;j++){
         cin>>v[i][j];
         sum+=v[i][j];
      }
   }
   if((m%2==0) && (n%2==0)){
      bool flag = 0;
      vector<vector<char>>aux(n,vector<char>(m));
      
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            if(flag) aux[i][j] = 'w';
            else aux[i][j] = 'b';
            flag = !flag;
         }
         flag = !flag;
      }

      int res = -1;
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            if(aux[i][j] == 'b') continue;
            res = max(res,sum-v[i][j]);
         }
      }
      cout<<res<<endl;
      return 0;
   }
   
   cout<<sum<<endl;

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

