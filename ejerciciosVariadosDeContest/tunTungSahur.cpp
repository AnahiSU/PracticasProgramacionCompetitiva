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
      string s1,s2; cin>>s1>>s2;
      int n1 = sz(s1);
      int n2 = sz(s2);

      vector<int>v1;
      vector<int>v2;

      if(s1[0] == s2[0]){
         char ant = s1[0];
         int cont = 0;
         for(int i = 0; i<n1; i++){
            if(s1[i] == ant){
               cont++;
            }else{
               v1.push_back(cont);
               cont = 1;
            }
            ant = s1[i];
         }
         v1.push_back(cont);
         ant = s2[0];
         cont = 0;
         for(int i = 0; i<n2; i++){
            if(s2[i] == ant){
               cont++;
            }else{
               v2.push_back(cont);
               cont = 1;
            }
            ant = s2[i];
         }
         v2.push_back(cont);
         if(sz(v1) == sz(v2)){
            bool flag = 1;
            for(int i = 0; i <sz(v1);i++){
               if(v1[i] * 2 < v2[i] || v2[i] < v1[i]){
                  flag = 0;
               }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }else{
            cout<<"NO"<<endl;
         }

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

