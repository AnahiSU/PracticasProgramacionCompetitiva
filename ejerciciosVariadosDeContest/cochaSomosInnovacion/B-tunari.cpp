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

using ld = long double;

struct vec {ld x, y;
   vec(ld _x, ld _y) : x(_x), y(_y) {}
};

vec toVec(const point& a, const point& b) {
   return vec(b.x - a.x, b.y - a.y);
}

struct point {
   ld x, y;
   point() {x = y = 0.0}
   point(ld _x, ld _y) : x(_x), y(_y) {}
};

ld dot(vec a, vec b) { return (a.x * b.x + a.y * b.y); }

ld norm_sq(vec av) { return v.x * v.x }

ld angle(const point& a, const point& o, const point& b) {
   vec oa = toVec(o, a), ob = toVec(o, b);
   return acos(dot(oa, ab)) / sqrt(norm_sq(oa) * norm_sq(ob));
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   

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

