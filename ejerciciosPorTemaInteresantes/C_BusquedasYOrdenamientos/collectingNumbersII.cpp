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
   int n,q; cin>>n>>q;
   vector<int>v(n), visi(n), m(n);
   map<int,int> ls;
   
   for(int i = 0; i<n;i++){
      cin>>v[i];
      ls[v[i]] = i;
   }

   for(int i = n-1; i>=0; i--){
      int num = v[i];
      if(num != n){
         if(visi[num] != 0) m[i] = 1;
      }else{
         m[num-1] = 0;
      }
      visi[num-1] = 1;
   }
   int cont = 0;
   for(int i : m){
      if(!i) cont++;
   }
   while(q--){
      int a,b; cin>>a>>b; a--;b--;
      if(a==b){
         cout<<cont<<endl;
         continue;
      }
      ls[v[a]] = b;
      ls[v[b]] = a;
      swap(v[a],v[b]);
      swap(m[a],m[b]);
      if(ls[v[a]+1] > ls[v[a]] && v[a]!=n){
         if(m[v[a]-1] == 0) {cont--;m[v[a]] = 1;}
      }else{
         if(m[v[a]-1] == 1) {cont++;m[v[a]] = 0;}
      } 
      if(ls[v[a]-1] < ls[v[a]] && v[a] != 1){
         if(m[v[a]-2] == 0) {cont--;m[v[a]-2] = 1;}
      }else{
         if(m[v[a]-2] == 1){cont++;m[v[a]-2] = 0;}
      }
      
      
      if(ls[v[b]+1] > ls[v[b]] && v[b] != n){
         if(m[v[b]-1] == 0) {cont--;m[v[b]-1] = 1;}
      }else{
         if(m[v[b]-1] == 1) {cont++;m[v[b]-1] = 0;}
      } 
      if(ls[v[b]-1] < ls[v[b]] && v[b]!=1){
         if(m[v[b]-2] == 0) {cont--;m[v[b]-2] = 1;}
      }else{
         if(m[v[b]-2] == 1){cont++;m[v[b]-2] = 0;}
      }

      cout<<cont<<endl;
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

