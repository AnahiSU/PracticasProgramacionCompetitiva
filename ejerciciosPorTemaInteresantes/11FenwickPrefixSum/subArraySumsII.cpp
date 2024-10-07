/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;
    
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,x; cin>>n>>x;
    vector<int> v(n);
    vector<pair<int,int>>sums(n+1);
    int sumita = 0;
    for(int i = 0; i<n;i++){
        cin>>v[i];
        sumita+= v[i];
        sums[i+1] = {sumita,i};
    }
    int cont = 0;
    srt(sums);
    for(int i = n; i>0;i--){
        int piv = abs(sums[i].first-x);
        if(piv != x){
            int l = -1, r = i;
            while(r-l>1){
                int m = (l+r)/2;
                if(sums[m].first > piv){
                    r = m;
                }else{
                    l = m;
                }
            }
            if(sums[l].first == piv){
                if(sums[l].second < sums[i].second)cont++;
            }
        }else{
            if(piv == x) cont++;
        }
        

    }
    cout<<cont<<endl;

  
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