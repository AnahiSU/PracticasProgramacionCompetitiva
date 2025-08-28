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
vector<int> ts;
int k = 0;

void toposort(int u, vector<bool>& visited, vector<set<int>>& g) {
   visited[u] = true;
   for (int v : g[u]) {
      if (!visited[v])
         toposort(v, visited, g);
   }
   ts.push_back(u);
}

// parar cuando no tengo incidencias
void dfs(int u, vector<bool>& visited, vector<set<int>>& g) {
   visited[u] = true;
   if (!g[u].size())
      return;
   if (g[u].count(ts[k])) {
      dfs(ts[k++], visited, g);
   } else
      return;
}


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);

   int n;
   cin >> n;
   vector<set<int>> g(n);
   vector<int> inc(n);
   for (int i = 0; i < n; i++) {
      int c;
      cin >> c;
      for (int j = 0; j < c; j++) {
         int x;
         cin >> x;
         x--;
         g[i].insert(x);
         inc[x]++;
      }
   }
   int start = 0;
   for (int i = 0; i < n; i++)
      if (!inc[i]) {
         start = i;
         break;
      }
   vector<bool> visited(n);
   toposort(start, visited, g);
   reverse(ts.begin(), ts.end());
   visited.assign(n, 0);
   dfs(ts[k++], visited, g);
   bool ok = true;
   for (bool b : visited) {
      ok = ok && b;
   }
   cout << ok << '\n';

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

