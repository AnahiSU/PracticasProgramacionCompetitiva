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
vector<pair<int,int>>moves;
void bubbleSort(vector<int>& arr, int num) {
    int n = sz(arr);
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
      swapped = false;
      for (int j = 0; j < n - i - 1; j++) {
         if (arr[j] > arr[j + 1]){
            moves.push_back({num,j+1});
            swap(arr[j], arr[j + 1]);
            swapped = true;
         }
      }
      if (!swapped) break;
    }
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   while(c--){
      int n; cin>>n;
      vector<int>v1(n),v2(n),aux1,aux2;
      for(int i = 0; i<n;i++) cin>>v1[i];
      for(int i = 0; i<n;i++) cin>>v2[i];
      aux1 = v1;
      aux2 = v2;

      bubbleSort(v1,1);
      bubbleSort(v2,2);
      for(int i = 0; i<n;i++){
         if(v1[i] > v2[i]) {
            swap(v1[i],v2[i]);
            moves.push_back({3,i+1});
         }
      }
      vector<pair<int,int>>moves2;
      moves2 = moves;

      moves.clear();
      
      for(int i = 0; i<n;i++){
         if(aux1[i] > aux2[i]) {
            swap(aux1[i],aux2[i]);
            moves.push_back({3,i+1});
         }
      }
      bubbleSort(aux1,1);
      bubbleSort(aux2,2);

      moves = (sz(moves) < sz(moves2)) ? moves : moves2;

      cout<<sz(moves)<<endl;
      for(auto i : moves){
         cout<<i.first<<' '<<i.second<<endl;
      }
      moves.clear();

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

