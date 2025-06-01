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
      vector<vector<int>>mat(n,vector<int>(n,0));
      int mid = n&1 ? n/2 : (n/2)-1;
      mat[mid][mid] = 0;
      int ind = (n*n) -1;
      int l = 0,r = n-1,t = 0,b = n-1;
      while(t <= b && l <= r){
         for(int i = r; i>= l;i--){
            mat[t][i] = ind;
            ind--;
         }
         t++;
         
         for(int i = t; i<=b;i++){
            mat[i][l] = ind;
            ind--;
         }
         l++;

         if(t<=b){
            for(int i = l; i<=r;i++){
               mat[b][i] = ind;
               ind--;
            }
            b--;
         }
         if(l<=r){
            for(int i = b; i >= t; i--){
               mat[i][r] = ind;
               ind--;
            }
            r--;
         }
      }
      for(auto i : mat){
         for(auto j : i){
            cout<<j<<' ';
         }
         cout<<endl;
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

