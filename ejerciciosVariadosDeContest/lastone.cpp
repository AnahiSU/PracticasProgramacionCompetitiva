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

struct Player {
   int h, d, t;
};

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   vector<Player> p(2);
   cin >> p[0].h >> p[0].d >> p[0].t;
   cin >> p[1].h >> p[1].d >> p[1].t;
   p[0].t *= 10;
   p[1].t *= 10;
   int times0, times1;
   times0 = ((p[1].h / p[0].d) + ((p[1].h % p[0].d) != 0));
   times1 = ((p[0].h / p[1].d) + ((p[0].h % p[1].d) != 0));
   int stamp0 = 0;
   int stamp1 = 0;
   int f0, f1;
   f0 = f1 = 0;
   for (int i = 0; i < times0; i++) {
      f0 = stamp0 + 5;
      stamp0 += p[0].t;
   }
   for (int i = 0; i < times1; i++) {
      f1 = stamp1 + 5;
      stamp1 += p[1].t;
   }
   if (f0 < f1) {
      cout << "player one" << '\n';
   } else if (f0 > f1) {
      cout << "player two" << '\n';
   } else {
      cout << "draw" << '\n';
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

