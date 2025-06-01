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
      bool flag = 0;
      string s; cin>>s;
      int indI=0,indD=0;

      if(n == 1 || n==4){
         cout<<"Yes"<<endl;
         continue;
      }
      for(int i = 0; i<n;i++){
         if(s[i] == '0'){
            if(!flag) indI = i;
            flag = 1;
            
         }
      }
      bool flag2 = 0;
      for(int i = n-1; i>=0; i--){
         if(s[i]=='0' && !flag2){
            indD = i;
            flag2 = 1;
         }
      }

      

      if(flag){
         if(indI - 1 == (n-1) - (indD +1) && indD + 1 -(indI-1) + 1 == ((indI-1)-2) * (indI-1) ){
            cout<<"Yes"<<endl;
         }else{
            cout<<"No"<<endl;
         }
      }else{
         cout<<"No"<<endl;
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

