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
   set<int> ls;
   string s; cin>>s;
   for(int i = 0; i<n;i++) ls.insert(s[i]);
   set<int>ayuda;
   map<char,int>aux;
   int i = 0, j =0;
   int tam = 1e9;
   while(i<n && j<n){
      if(sz(ayuda) == sz(ls)){
         tam = min(tam, abs(j-i));
         //cubri todos
         aux[s[j]]--;
         if(aux[s[j]] == 0){
            ayuda.erase(s[j]);
         }
         j++;
      }else{
         //no cubri
         aux[s[i]]++;
         ayuda.insert(s[i]);
         i++; 
      }
      
   }
   while(j<n){
      if(sz(ayuda) == sz(ls))tam = min(tam, abs(j-i));
      aux[s[j]]--;
      if(aux[s[j]] == 0){
         break;
      }
      j++;
      

   }
   cout<<tam<<endl;
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

