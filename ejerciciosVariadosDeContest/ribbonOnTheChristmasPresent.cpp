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
   int n; cin>>n;
   vector<int>v(n);
   int mini = 1e9;
   for(int i = 0; i<n;i++){
      cin>>v[i];
      mini = min(v[i],mini);
   }
   set<int>ls;
   bool sub = 1;
   int cont = 0;
   int j = 0;
   while(j<n-1 && v[j] > v[j+1]){
      cont++;
      j++;
   }

   for(int i = j; i<n-1;i++){
      ls.insert(v[i]);
      if(sub){
         if(v[i] > v[i+1]){
            sub=!sub;
         }
      }else{
         if(v[i]<v[i+1]){
            if(*ls.begin() == mini){
               cont+=sz(ls)-1;
            }else{
               cont+=sz(ls);
            }
            ls.clear();
            sub = !sub;
         }
      }
   }
   if(sz(ls) >=1){
      if(*ls.begin()==mini){
         cont+=sz(ls)-1;
      }else{
         cont+=sz(ls);
      }
   }
   cout<<cont+1<<endl;

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

