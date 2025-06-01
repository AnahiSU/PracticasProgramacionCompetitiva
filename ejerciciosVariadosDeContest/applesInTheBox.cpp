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
      int n,k; cin>>n>>k;
      vector<int>v(n);
      int sum = 0;
      int maxi=-1, mini=1e9+6;
      map<int,int>ls;
      for(int i = 0; i<n;i++){
         cin>>v[i];
         sum+= v[i];
         ls[v[i]]++;
         mini = min(mini,v[i]);
         maxi = max(maxi,v[i]);
      }

      if(ls[maxi] > 1){
         if(maxi-mini <=k){
            if(sum&1){
               cout<<"Tom"<<endl;
            }else{
               cout<<"Jerry"<<endl;
            }
         }else{
            cout<<"Jerry"<<endl;
         }
      }else{
         if((maxi -1)-mini<=k){
            if(sum&1){
               cout<<"Tom"<<endl;
            }else{
               cout<<"Jerry"<<endl;
            }
         }else{
            cout<<"Jerry"<<endl;
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

