/*
- Siempre de frente.
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
      
      string s; cin>>s;
      int tam = sz(s);
      set<vector<int>>ls;

      for(int i = 0; i<tam;i++){
         if(s[i] == '1'){
            bitset<19> bs(i+1);
            vector<int>v;
            for(int i = 0; i<n;i++){
               if(bs[i] == 1) v.push_back(i+1);
            }
            srt(v);
            ls.insert(v);
         }
      }
          
      vector<int>res,aux;
      vector<bool>visi(n);
      while(sz(res) != n){
         int antS = sz(res);
         for(int i = 0; i<n;i++){
            if(visi[i]) continue;
            
            res.push_back(i+1);
            aux = res;
            srt(aux);
            if(ls.count(aux)){
               res.pop_back();
            }else{
               visi[i] = 1;
               break;
            }
            
         }
         if(antS == sz(res)){
            break;
         }
      }
      
      if(sz(res) == n) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
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

