/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    while(c--){
        int n,m; cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        if(m == 1 && n == 1){
            int x; cin>>x;
            cout<<-1<<"\n";
        }else{
            if(n>1){ //mas de dos filas
                for(int i = 0; i<n; i++){
                    for(int j = 0; j<m; j++){
                        cin>>v[i][j];
                    }
                }

                for(int i = 1; i<n; i++){
                    for(int j = 0; j<m; j++){
                        cout<<v[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                for(int i = 0; i<m;i++){
                    cout<<v[0][i]<<" ";
                }
                cout<<"\n";
                
            }else{
                for(int i = 0; i<m;i++){
                    cin>>v[0][i];
                }
                reverse(v[0].begin(),v[0].end());
                if(m%2 != 0){
                    int ind = m/2;
                    int aux = v[0][0];
                    v[0][0] = v[0][ind];
                    v[0][ind] = aux;
                }
                for(int i = 0; i<m; i++){
                    cout<<v[0][i]<<" ";
                }
                cout<<"\n";
            }
            
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