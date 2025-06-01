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

bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
   if(a.first.first > b.first.first){
      return false;
   }else if(a.first.first < b.first.first){
      return true;
   }else if(a.first.second > b.first.second){
      return false;
   }else if(a.first.second < b.first.second){
      return true;   
   }else if(a.second > b.second){
      return false;
   }else if(a.second < b.second){
      return true;
   }else{
      return false;
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<pair<pair<int,int>,int>>v(n);
   for(int i=0; i<n;i++){
      int a,b,c;cin>>a>>b>>c;
      v[i] = {{a,b},c};
   }
   sort(v.begin(),v.end(),cmp);

   int cont2=0,cont3=0;
   int ant1 = -1, ant2=-1,ant3=-1;
   vector<pair<pair<int,int>,int>>res;
   vector<pair<pair<int,int>,int>> v2;
   pair<pair<int,int>,int> ant;
   for(int i = 0; i<n;i++){
      if(v[i] == ant) continue;
      ant = v[i];
      v2.push_back(v[i]);
   }
   for(int i = 0;i<sz(v2);i++){
      if(v2[i].first.first != ant1){
         res.push_back({{ant1,cont2},cont3});
         cont2=1;cont3=1;

         ant1 = v2[i].first.first;
         ant2 = v2[i].first.second;
         continue;
      }else{
         cont3++;
      }
      if(v2[i].first.second != ant2){
         cont2++;
      }
      ant1 = v2[i].first.first;
      ant2 = v2[i].first.second;

      
   }
   res.push_back({{ant1,cont2},cont3});

   for(int i = 0; i<sz(res);i++){
      if(i == 0) continue;
      cout<<res[i].first.first<<' '<<res[i].first.second<<' '<<res[i].second<<endl;
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

