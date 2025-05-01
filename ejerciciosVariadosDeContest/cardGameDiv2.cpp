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
      int contA=0, contB=0;
      int n; cin>>n;
      string s; cin>>s;
      int a=0,b=0;
      for(int i = 0; i<n;i++){
         if(s[i]=='A') contA++;
         else contB++;
         for(int j = i+1; j<n;j++){
            if(s[i]!=s[j]){
               if(s[i] == 'A'){
                  a++;
               }else{
                  b++;
               }
            }
         }
      }

      if(s[n-1] != s[0]){
         if(s[0] == 'A') b++;
         else a++;
      }

      cout<<"A: "<<a<<"B: "<<b<<endl;
      if(n==2){
         if(s[0] == 'A') cout<<"Alice"<<endl;
         else cout<<"Bob"<<endl;
      }else if(contA==1){
         cout<<"Bob"<<endl;
      }else if(contB == 1){
         cout<<"Alice"<<endl;
      }else if(a>b){
         cout<<"Bob"<<endl;
      }else if(b>a){
         cout<<"Alice"<<endl;
      }else{
         cout<<"Bob"<<endl;
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

