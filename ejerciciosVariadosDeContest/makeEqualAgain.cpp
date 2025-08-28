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
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      vector<int>v(n);
      set<int>ls;
      for(int i = 0; i<n;i++){
         cin>>v[i];
         ls.insert(v[i]);
      } 
      if(sz(ls) == 1){
         cout<<0<<endl;
      }else{
         int j = n-1, i = 0;
         while(v[i] == v[j] && v[i] == v[i+1] && v[j] == v[j-1]){
            i++;
            j--;
         }
         while(v[j-1] == v[j]){
            j--;
         }
         while(v[i] == v[i+1] && v[i] == v[n-1]){
            i++;
         }
         int res = j-i-1;
         if(v[i] != v[j]) res++;
         i = 0;j=n-1;
         while(v[i] == v[j]&& v[i] == v[i+1] && v[j] == v[j-1]){
            i++;j--;
         }
         while(v[i]==v[i+1]){
            i++;
         }
         while(v[j] == v[j-1] && v[j] == v[0]){
            j--;
         }
         int res2 = j-i-1;
         if(v[i] != v[j])res2++;
         res = min(res, res2);
         cout<<res<<endl;
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

