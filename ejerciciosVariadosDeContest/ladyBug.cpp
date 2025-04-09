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
      string s1,s2; cin>>s1>>s2;
      vector<int>aux1(n),aux2(n);

      bool flag = 1;
      for(int i = 0; i<n;i++){
         //me da flojera contar solo 0's
         if(flag) aux1[i] = (s1[i] == '1' ? 0 : 1);
         else aux1[i] = (s2[i] == '1' ? 0 : 1);
         flag = !flag;
      }
      flag = 0;
      for(int i = 0; i<n;i++){
         if(flag) aux2[i] = (s1[i] == '1' ? 0 : 1);
         else aux2[i] = (s2[i] == '1' ? 0 : 1);
         flag = !flag;
      }
      int mid2 = n/2;
      int mid1 = (n&1) ? (n/2) + 1 : n/2;
      if(accumulate(aux2.begin(), aux2.end(),0) >= mid2 && accumulate(aux1.begin(),aux1.end(),0) >= mid1){
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

