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
   string s;
   getline(cin, s);
   string list;
   getline(cin,list);

   list = list.substr(1);
   list.pop_back();

   set<char>ls(list.begin(),list.end());

   string res = "";
   for(int i = 0; i<sz(s);i++){
      if(ls.find(s[i]) == ls.end()){
         if(res.empty()) res.push_back(s[i]);
         else{
            if(res.back() == s[i]){
               continue;
            }else{
               res.push_back(s[i]);
            }
         }
      }
   } 

   int ind1 = 0, ind2 = sz(res)-1;
   while(res[ind1] == ' '){
      ind1++;
   }
   while(res[ind2] == ' '){
      ind2--;
   }

   
   cout<<res.substr(ind1, ind2-ind1+1)<<endl;

   //cout<<list.size()<<endl;
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

