/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>

using namespace std;
 
signed main ()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    int c;cin>>c;
    while(c--){
        int n;
        cin>>n;
        map<int,int> lis;
        vector<int> nums;
        for(int i = 0; i<n; i++){
            int a;cin>>a;
            lis[a]++;
            nums.push_back(a);
        }
        int max = -1;
        int ind = -1;
        for(auto eso=lis.begin(); eso!=lis.end(); ++eso){
            if(eso->second > max){
                max = eso->second;
                ind = eso->first;
            }
        }

        for(int i = 0; i<n;i++){
            if(nums.at(i) != ind){
                cont++;
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