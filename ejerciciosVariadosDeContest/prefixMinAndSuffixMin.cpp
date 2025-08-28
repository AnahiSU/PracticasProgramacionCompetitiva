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
      for(int i = 0; i<n;i++) cin>>v[i];
      vector<int>minim(n),maxim(n);
      minim[0] = v[0];
      for(int i = 1; i<n;i++){
         minim[i] = min(minim[i-1],v[i]);
      }

      maxim[n-1] = v[n-1];
      for(int i = n-2; i>=0;i--){
         maxim[i] = max(maxim[i+1],v[i]);
      }

      for(int i=0;i<n;i++){
         if(i==0 || i == n-1){
            cout<<"1";
         }else{
            if(minim[i] == v[i] && maxim[n-1] != v[i]){
               cout<<"1";
            }else if(maxim[i] == v[i] && minim[0] != v[i]){
               cout<<"1";
            }else{
               cout<<"0";
            }
         }
         
      }
      cout<<endl;
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
