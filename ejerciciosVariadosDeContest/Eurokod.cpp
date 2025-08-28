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

struct Result {
   int id, points;
};

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   int n;
   cin >> n;
   vector<Result> r(n);
   for (int i = 0; i < n; i++) {
      r[i].id = i;
   }
   vector<int> p_rank_id(n), m_rank_votes(n);
   for (int i = 0; i < n; i++) {
      cin >> p_rank_id[i];
      r[p_rank_id[i] - 1].points += (n - i);
   }
   vector<pair<int, int>> res;
   for (int i = 0; i < n; i++) {
      cin >> m_rank_votes[i];
      res.push_back({m_rank_votes[i], i});
   }
   int k = n;
   sort(res.rbegin(), res.rend());
   for (auto [f, s] : res) {
      r[s].points += k--;
   }
   sort(r.begin(), r.end(), [&](Result r1, Result r2) {
      if (r1.points == r2.points) {
         return m_rank_votes[r1.id] > m_rank_votes[r2.id];
      }
      return r1.points > r2.points;
   });
   for (int i = 0; i < n; i++) {
      cout << (i + 1) << ". " << "Kod" << ((r[i].id + 1 >= 10) ? to_string(r[i].id + 1) : ("0" + to_string(r[i].id + 1))) << " (" << (r[i].points) << ")" << '\n';
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

