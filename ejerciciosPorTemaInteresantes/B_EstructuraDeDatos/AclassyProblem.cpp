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
   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      vector<pair<vector<string>,string>>v(n);
      for(int i = 0; i<n;i++){
         vector<string>auxV;
         string s1,s,trh; cin>>s1>>s>>trh;
         string aux = "";
         for(int i = 0; i<sz(s);i++){
            if(s[i]=='-'){
               auxV.push_back(aux);
               aux = "";
               continue;
            }
            aux.push_back(s[i]);
         }
         auxV.push_back(aux);
         s1 = s1.substr(0,sz(s1)-1);

         v[i] = {auxV,s1};
      }
      sort(v.rbegin(),v.rend());

      for(auto i : v){
         cout<<i.second<<endl;
      }
      cout<<"=============================="<<endl;
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

