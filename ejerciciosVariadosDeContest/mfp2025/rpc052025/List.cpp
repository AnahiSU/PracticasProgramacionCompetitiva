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

void balance(multiset<int>& ms1, multiset<int>& ms2) {
   int s1 = ms1.size();
   int s2 = ms2.size();
   if (abs(s1 - s2) >= 2) {
      if (s1 > s2) {
         auto last = ms1.end(); last--;
         ms2.insert(*last);
         ms1.erase(last);
      } else {
         ms1.insert(*ms2.begin());
         ms2.erase(ms2.begin());
      }
   }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   int q;
   cin >> q;
   multiset<int> ms1, ms2;
   while (q--) {
      int tq;
      cin >> tq;
      if (tq == 3) {
         if (ms1.empty() && ms2.empty()) {
            cout << "Empty!" << '\n';
         } else {
            int s1 = ms1.size();
            int s2 = ms2.size();
            if ((s1 + s2) & 1) {
               if (s1 < s2) {
                  cout << *ms2.begin() << '\n';
               } else {
                  auto ans = ms1.end();
                  ans--;
                  cout << *ans << '\n';
               }
            } else {
               auto last1 = ms1.end(); last1--;
               auto first2 = ms2.begin();
               cout << ((*last1 + *first2) / 2) << endl;
            }
         }
      } else if (tq == 1) {
         int V;
         cin >> V;
         if (ms1.empty() && ms2.empty()) {
            ms1.insert(V);
         } else {
            if (ms1.empty()) { // primero vacio
               auto it = ms2.begin();
               if (V < *it) {
                  ms1.insert(V);
               } else {
                  ms2.insert(V);
               }
               balance(ms1, ms2);
            } else if (ms2.empty()) { // segundo vacio
               auto it = ms1.end();
               it--;
               if (V > *it) {
                  ms2.insert(V);
               } else {
                  ms1.insert(V);
               }
               balance(ms1, ms2);
            } else { // ambos con elementos
               if (V >= *ms2.begin()) {
                  ms2.insert(V);
               } else {
                  ms1.insert(V);
               }
               balance(ms1, ms2);
            }
         }
      } else { // eliminar
         int V;
         cin >> V;
         if (ms1.count(V)) {
            ms1.erase(ms1.find(V));
         } else if (ms2.count(V)) {
            ms2.erase(ms2.find(V));
         }
         balance(ms1, ms2);
      }
      /*for (auto a : ms1) {
         cout << a << ' ';
      }
      cout << " ??? ";
      for (auto b : ms2) {
         cout << b << ' ';
      }
      cout << endl;*/
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

