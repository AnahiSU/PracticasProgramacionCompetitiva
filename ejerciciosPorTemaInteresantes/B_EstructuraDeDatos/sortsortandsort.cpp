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
//#define int long long
#define sz(v) (int)v.size()

using namespace std;
int m;
bool cmp(int a, int b){
   if((a%m) == (b%m)){
      if(!(a&1) && b&1){
         return false;
      }
      if(!(b&1) && a&1){
         return true;
      }
      if(b&1 && a&1){
         return a>b;
      }
      return a<b;
      
   }else{
      return (a%m)<(b%m);
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n;
   while(cin>>n>>m && (n && m)){
      vector<int>v(n);
      for(int i = 0; i<n; i++) cin>>v[i];

      sort(v.begin(), v.end(), cmp);
      cout<<n<<' '<<m<<endl;
      for(int i : v){
         cout<<i<<endl;
      }
   }
   cout<<0<<' '<<0<<endl;

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

