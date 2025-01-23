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
    int n,m;
    while(cin>>n>>m && m && n){
        vector<vector<int>>mat(n,vector<int>(m,-1));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m;j++){
                cin>>mat[i][j];
            }
        }
        int k; cin>>k;
        
        while(k--){
            int best = -1;
            int li,u; cin>>li>>u;
            li--;
            for(int i = 0; i<n;i++){
                int l = -1, r = n;
                while(r-l > 1){
                    int mid = (l+r)/2;
                    if(mat[i][mid] > li){
                        r = mid;
                    }else{
                        l = mid;
                    }
                }
                if(r!=n && mat[i][r] > li && mat[i][r]<=u){
                    int l1=-1,r1=m;
                    for(int j = i+1; j<n;j++){
                        while(r1-l1 > 1){
                            int mid2 = (l1+r1)/2;
                            if(mat[j][mid2] > u){
                                r1 = mid2;
                            }else{
                                l1 = mid2;
                            }
                        }
                        if(l!=-1){
                            if(abs(l1-r) == abs(i-j) && l1>r){
                                best = max(best,abs(l1-l));
                            }else{
                                best = max(1,best);
                            }
                            
                        }else{
                            best = max(0,best);
                        }

                    }
                   
                }else{
                    best = max(0,best);
                }
                
            }
            cout<<best<<endl;
        }
        cout<<"-"<<endl;
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