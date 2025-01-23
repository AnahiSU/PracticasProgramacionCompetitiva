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
    int n;
    while(cin>>n){
        vector<int>v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        int m; cin>>m;
        cin.ignore();
        srt(v);
        int best = 1e9;
        int k = -1,j = -1;
        for(int i = 0; i<n;i++){
            int lo = 0, hi = n-1;
            int mid = (lo+hi)/2;
            int x = m-v[i];
            if(x>=v[i]){
                while(lo<=hi){
                    mid = (lo+hi)/2;
                    if(v[mid] == x){
                        if(abs(v[mid] - v[i]) < best){
                            
                            best = abs(v[mid] - v[i]);
                            k = v[mid];         
                            j = v[i];
                            
                        }
                        break;
                    }else{
                        if(v[mid] < x){
                            lo = mid+1;
                        }else{
                            hi = mid-1;
                        }
                    }
                    
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<min(j,k)<<" and "<<max(k,j)<<"."<< endl;
        cout<<endl;
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