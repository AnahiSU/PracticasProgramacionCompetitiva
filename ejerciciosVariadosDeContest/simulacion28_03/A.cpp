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
   string s1,s2; cin>>s1>>s2;
   int n = sz(s1), n2 = sz(s2);
   map<char,set<int>> ls;
   for(int i = 0; i<n; i++){
      ls[s1[i]].insert(i+1);
   }
   vector<int>lista(n2);
   lista[0] = *(ls[s2[0]].begin());
   for(int i = 1; i<n2; i++){
      auto pos = ls[s2[i]].upper_bound(lista[i-1]);
      if(pos != ls[s2[i]].end()){
         lista[i] = *pos;
      }else{
         lista[i] = *(ls[s2[i]].begin());
      }
   }

   int res = 1;

   for(int i = 1; i<sz(lista);i++){
      if(lista[i] <= lista[i-1]){
         res++;
      } 
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

