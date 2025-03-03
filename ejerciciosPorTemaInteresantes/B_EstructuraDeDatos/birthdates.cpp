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

bool cmp (pair<string,pair<int,pair<int,int>>>a,pair<string,pair<int,pair<int,int>>>b){
   if(a.second.second.second > b.second.second.second){
      return true;
   }else if(a.second.second.second < b.second.second.second){
      return false;
   }else if(a.second.second.first > b.second.second.first){
      return true;
   }else if(a.second.second.first < b.second.second.first){
      return false;
   }else if(a.second.first > b.second.first){
      return true;
   }else{
      return false;
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<pair<string,pair<int,pair<int,int>>>>v(n);
   for(int i = 0; i<n;i++){
      string s; int m,d,a; cin>>s>>d>>m>>a;
      v[i] = {s,{d,{m,a}}};
   }
   sort(v.begin(),v.end(),cmp);

   cout<<v[0].first<<endl<<v[n-1].first<<endl;


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

