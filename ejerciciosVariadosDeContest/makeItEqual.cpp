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
   int c; cin>>c;
   while(c--){
      int n,k; cin>>n>>k;
      vector<int>s(n),t(n);
      for(int i = 0; i<n;i++) cin>>s[i];
      for(int i = 0; i<n;i++) cin>>t[i];
      multiset<int>ls;
      for(int i = 0; i<n;i++){
         ls.insert(t[i]%k);
      }
      bool flag = 1;
      for(int i = 0; i<n;i++){
         int a = s[i]%k;
         int b = abs((s[i]%k) - k);
         auto aa = ls.find(a);
         auto bb = ls.find(b);
         if(aa != ls.end()){
            ls.erase(aa);
         }else if(bb!=ls.end()){
            ls.erase(bb);
         }else{
            flag = 0;
            break;
         }
      }      

      if(flag){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }

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

