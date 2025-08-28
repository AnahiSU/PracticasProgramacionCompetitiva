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
   int n,k; cin>>n>>k;
   map<int,int>ls;
   vector<pair<int,int>>v(n);
   for(int i = 0; i<n;i++){
      cin>>v[i].first;
      v[i].second = i;
      ls[v[i]]++;
   }
   srt(v);
   vector<int>res(n);
   int grup = n/k;
   if(n&1) grup++;

   if(k<sz(ls)){
      
      for(int i = 0; i<sz(ls);i+=grup){
         int maxi  = -1;
         for(int j = i; j<i+grup && j<n;j++){
            maxi = max(v[j].first,maxi);
         }
         for(int j = i; j<i+grup && j<n;j++){
            res[v[j].second] = maxi;
         }
      }
 
   vector<int>res2(n);
   reverse(v.begin(),v.end());
 
   for(int i = 0; i<n;i+=grup){
      int maxi  = -1;
      for(int j = i; j<i+grup && j<n;j++){
         maxi = max(v[j].first,maxi);
      }
      for(int j = i; j<i+grup && j<n;j++){
         res2[v[j].second] = maxi;
      }
   }

   }else if(k>=sz(ls)){
      for(int i = 0; i<n;i++){
         res[i]=v[i];
      }
   }   

   int pen = 0,pen2=0;
   for(int i = 0; i<n;i++){
      pen+=(res[i]-v[i].first)*(res[i]-v[i].first);

   }
   for(int i = 0; i<n;i++){
      pen2+=(res2[i]-v[i].first)*(res2[i]-v[i].first);
   }
   if(pen < pen2){
      for(int i : res){
         cout<<i<<' ';
      }
   } else{
      for(int i : res2){
         cout<<i<<' ';
      }
   }
   
   cout<<endl;
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

