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
      int n,m; cin>>n>>m;
      vector<vector<int>>v(n,vector<int>(m));
      int maxi = -1;
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            cin>>v[i][j];
            maxi = max(maxi,v[i][j]);
         }
      }
      int col = 0, fil = 0;
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            if(v[i][j] == maxi){
               col = j;
               fil = i;
               break;
            }
         }
      }
      //cout<<"col fil : "<<fil<<' '<<col<<endl;
      //cout<<"eakf: "<<v[fil][col]<<endl;

      int cont = 0;
      for(int i = 0; i<n;i++){
         for(int j = 0; j<m;j++){
            if(j == col) continue;
            if(v[i][j] == maxi){
               cont++;
               break;
            }
         }
      }
      //cout<<"cont1: "<<cont<<endl;
      if(cont > 1){
         cont = 0;
         for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
               if(j == fil) continue;
               if(v[j][i] == maxi){
                  cont++;
                  break;
               }
            }
         }
         //cout<<"Cont2: "<<cont<<endl;
         if(cont > 1){
            cout<<maxi<<endl;
         }else{
            cout<<maxi-1<<endl;
         }
      }else{
         cout<<maxi-1<<endl;
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

