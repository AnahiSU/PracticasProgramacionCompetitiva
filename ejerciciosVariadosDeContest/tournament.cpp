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
      int n,j,k; cin>>n>>j>>k;
      vector<int>v(n);
      for(int i = 0; i<n;i++){
         cin>>v[i];
      }
      int ind = 0;
      vector<int>aux = v;
      srt(aux);
      for(int i = 0; i<n;i++){
         if(v[j-1]==aux[i]){
            ind = i;
         }
      }
      if(ind >0 && ind < n-1){
         if(k>1){
            cout<<"YES"<<endl;
         }else{
            if(aux[ind] == aux[n-1]){
               cout<<"YES"<<endl;
            }else{
               cout<<"NO"<<endl;
            }
         }
      }else{
         if(ind == 0 && k==1){
            if(aux[0] == aux[n-1]){
               cout<<"YES"<<endl;
            }else{
               cout<<"NO"<<endl;
            }
         }else{
            cout<<"YES"<<endl;
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

