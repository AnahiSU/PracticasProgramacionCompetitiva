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
   int numb = 1;
   while(c--){
      int n,k; cin>>n>>k;
      int tam = n*n;
      int ind = 1;
      vector<vector<int>>mat(n,vector<int>(n,0));
      int l = 0,r = n-1,t = 0,b = n-1;
      while(t <= b && l <= r){
         for(int i = l; i<= r;i++){
            mat[t][i] = ind;
            ind++;
         }
         t++;
         
         for(int i = t; i<=b;i++){
            mat[i][r] = ind;
            ind++;
         }
         r--;

         if(t<=b){
            for(int i = r; i>=l;i--){
               mat[b][i] = ind;
               ind++;
            }
            b--;
         }
         if(l<=r){
            for(int i = b; i >= t; i--){
               mat[i][l] = ind;
               ind++;
            }
            l++;
         }
      }

     int cont = 0, i = 0, j= 0;
      bool flag = 1;
      vector<int>res;
      while(mat[i][j] != tam){
         if(flag){
            i++;
         }else{
            j++;
         }
         res.push_back(mat[i][j]);
         cont++;
         flag = !flag;
      }
      cout<<"Case #"<<numb<<": ";
      if(cont <= k){
         cout<<sz(res)+1<<endl;
         for(int i =0; i<sz(res)-1;i+=2){
            cout<<res[i]<<' '<<res[i+1]<<endl;
         }
      }else{
         cout<<"IMPOSSIBLE"<<endl;
      }
      numb++;
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

