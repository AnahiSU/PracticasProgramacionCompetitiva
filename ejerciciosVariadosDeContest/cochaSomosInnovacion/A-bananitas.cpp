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


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   map<int,int>ls;
   for(int i = 0; i<n;i++){
      int a; cin>>a;
      ls[a]++;
   }
   vector<pair<int,int>>pa;
   for(auto i : ls){
      pa.push_back({i.first,i.second});
   }
   
   int mini = 1e18;
   int tam = 0;
   int cont = 0;

   int maxi = pa[0].second;
   for(int i = 1; i<sz(pa)-1;i++){
      if(abs(pa[i-1].first - pa[i].first) != 1){
         //segmento nuevo
         //debo procesar el anterior


         mini = min(mini, tam/maxi);
         tam = 0;
         maxi = pa[i].second;
      }else{
         //segmento en cosntriuccion
         maxi = max(maxi,pa[i].second);
         tam += pa[i].second;
      }
      
   }   
   mini = min(mini, n/maxi);
   cout<<mini<<endl;

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

