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

struct note {
   int a, b, c, d, e;
};

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   int n;
   cin >> n;
   vector<note> v(n);
   for (int i = 0; i < n; i++) {
      cin >> v[i].a >> v[i].b >> v[i].c >> v[i].d >> v[i].e;
   }
   int ans1, ans2, ans3;
   ans1 = ans2 = ans3 = 0;
   ans3++;
   for (int i = 1; i < n; i++) {
      bool ok1, ok2, ok3, ok4, ok5;
      ok1 = ok2 = ok3 = ok4 = ok5 = true;
      for (int j = 0; j < i; j++) {
         ok1 = (v[i].a > v[j].a) && ok1;
         ok2 = (v[i].b > v[j].b) && ok2;
         ok3 = (v[i].c > v[j].c) && ok3;
         ok4 = (v[i].d > v[j].d) && ok4;
         ok5 = (v[i].e > v[j].e) && ok5;
      }
      int total = ok1 + ok2 + ok3 + ok4 + ok5;
      if (total == 3) ans1++;
      if (total == 4) ans2++;
      if (total == 5) ans3++;
   }
   cout << ans1 << ' ' << ans2 << ' ' << ans3 << endl;
   
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

