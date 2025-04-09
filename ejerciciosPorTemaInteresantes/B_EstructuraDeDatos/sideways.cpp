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
bool cmp(const string &a, const string &b) {
    string aux1 = a;
    string aux2 = b;
    transform(aux1.begin(), aux1.end(), aux1.begin(), ::tolower);
    transform(aux2.begin(), aux2.end(), aux2.begin(), ::tolower);
    return aux1 < aux2;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n,m;
   while(cin>>n>>m && n && m){
   
   vector<string>v(m,"");
   for(int i = 0; i<n;i++){
      string s; cin>>s;
      for(int j=0; j<m;j++){
         v[j].push_back(s[j]);
      }
   }

   stable_sort(v.begin(),v.end(),cmp);

   for(int i = 0; i<n;i++){
      for(int j = 0; j<m; j++){
         cout<<v[j][i];
      }
      cout<<endl;
   }
      cout<<endl;
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

