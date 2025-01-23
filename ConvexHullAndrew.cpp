/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
#include <bits/stdc++.h>


using namespace std;
struct point {
  ll x, y;
  point() {x = y = 0L;}
  point(ll _x, ll _y) : x(_x), y(_y) {}
  bool operator < (point other) const {
    if (x != other.x) {
      return x < other.x;
    }
    return y < other.y;
  }
};

bool ccw(const point& p, const point& q, const point& r) {
  return orient(p, q, r) >= 0;
}

int in_polygon(const point& a, vector<point>& pol) {
  int num_crossings = 0;
  int n = pol.size();
  point p, q;
  for (int i = 0; i < n; i++) {
    p = pol[i];
    q = pol[(i + 1) % n];
    if (on_segment(p, q, a)) {
      return 0;
    }
    num_crossings += crosses_ray(p, q, a);
  } 
  return ((num_crossings & 1) ? 1 : -1);
}

vector<point> hull_andrew(vector<point>& pts) {
  int n = pts.size(), k = 0;
  vector<point> H(2 * n);
  sort(pts.begin(), pts.end());
  for (int i = 0; i < n; i++) {
    while ((k >= 2) && !ccw(H[k - 2], H[k - 1], pts[i])) k--;
    H[k++] = pts[i];
  }
  for (int i = n - 2, t = k + 1; i >= 0; i--) {
    while ((k >= t) && !ccw(H[k - 2], H[k - 1], pts[i])) k--;
    H[k++] = pts[i];
  }
  H.resize(k - 1);
  return H;
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

