/*
- siempre de frente.
- el trabajo duro supera al talento cuando el talento no trabaja duro.
- del fracaso se aprende, del éxito no mucho.
- para sentirse vivo se necesita una meta en la que trabajar.
- ¡demonios rocky! no hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end())
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define sz(v) (int)v.size()

using namespace std;

int pot (int n,int a){
   int res = n;
   for(int i = 1; i<a;i++) res*=n;
   return res;
}
signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      vector<int>res;
      for(int i = 0; i<=17;i++){
         int den = pot(10,i+1) + 1;
         if(n%den == 0){
            res.push_back(n/(den));
         }
      }
      reverse(res.begin(),res.end());
      cout<<sz(res)<<endl;
      for(int i : res){
         cout<<i<<' ';
      }
      if(sz(res) != 0)cout<<endl;
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

