/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>

using namespace std;
bool comp(pair<string,int> a, pair<string, int> b) {
  return a.second>b.second;
}
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int a;
  cin>>a;
  vector<pair <string,int>> lis;
  for(int i = 0 ; i<a; i++){
    int n,v; 
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cin>>v;
        lis.push_back(make_pair(s,v));
        
    }else if(n == 2){
      cin>>v;
      for(int j = 0; j<lis.size();j++){
        if(s == lis.at(j).first){
          lis.at(j).second = v;
        }
      }
      
    }else{
        sort(lis.begin(),lis.end(),comp);
        string k = lis.back().first;
        cout<<k<<" "<<i+1<<"\n";
        lis.pop_back();
    }
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