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
    vector<ll>v,v3;
    v.push_back(1LL);
    for(int i =1 ; i<32;i++){
        v.push_back(v[i-1]*2LL);
    }
    v3.push_back(1LL);
    for(int i =1 ; i<32;i++){
        v3.push_back(v3[i-1]*3LL);
    }

    int c; 
    while(cin>>c && c){
       ll res2 = 1e18+1;
        for(int i = 0; i<(int)v.size();i++){
       /*     int lo = 0,hi=(int)v3.size()-1;
            int mid = 0;
            int x = c-v[i]; 
            cout<<"para: "<<v[i]<<" x: "<<x<<endl;
            if(x>=v[i]){
                while(lo<=hi){
                    mid = (lo+hi)/2;
                    if(v3[mid]+v[i] >= c){
                        cout<<"mid: "<< v3[mid]<<" lo: "<<v3[lo]<<" hi: "<<v3[hi]<<endl;
                        bst = min(bst,v3[mid]+v[i]);
                        hi = mid-1;
                    }else{
                        if(v3[mid] < x){
                            lo = mid+1;
                        }else{
                            hi = mid-1;
                        }
                    }
                }
            }*/
            
           ll res = (c+v[i]-1)/v[i];
           if(v[i]>c){
             res2 = min(res2,v[i]);
             continue;
           }
           int it = (lower_bound(v3.begin(),v3.end(),res))-v3.begin();

           res2 = min(res2,v3[it]*v[i]);
        }
        cout<<res2<<endl;
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