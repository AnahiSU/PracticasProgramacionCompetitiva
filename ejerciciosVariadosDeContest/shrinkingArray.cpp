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
      for(int i = 0; i<n;i++){
         cin>>v[i];
      }
      bool flag = 0;
      for(int i = 0; i<n-1;i++){
         if(abs(v[i]-v[i+1]) <= 1){
            flag = 1;
            break;
         }
      }
      for(int i = n-1; i>0;i--){
         if(abs(v[i]-v[i-1]) <= 1){
            flag = 1;
            break;
         }
      }
      if(flag){
         cout<<0<<endl;
      }else{
         if(n==2){
            cout<<-1<<endl;
         }else{
            bool crec = (v[0]<=v[1]) ? 1 : 0;
            for(int i = 0; i<n-1;i++){
               if(v[i] <= v[i+1] && !crec){
                  flag = 1;
               }else if(v[i] >=v[i+1] && crec){
                  flag =1 ;
               }
            }  
            if(flag) cout<<1<<endl;
            else cout<<-1<<endl;
         }
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

