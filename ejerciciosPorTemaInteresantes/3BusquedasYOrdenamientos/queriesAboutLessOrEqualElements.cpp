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
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    for(int i = 0; i<m;i++){
        cin>>b[i];
    }
    srt(a);
    
    for(int i = 0; i<m;i++){
        int lo = 0, hi = n-1;
        int res = -1;
        int mid = (lo+hi)/2;
        //cout<<"--------"<<endl;
        //cout<<"para: "<<b[i]<<endl;
        while(lo<=hi){
            mid = (lo+hi)/2;
            //cout<<a[mid]<<" "<<a[lo]<<" "<<a[hi]<<endl;
            if(a[mid] <= b[i]){
                //12345678910
                //0000000011
                //l    m   h   
                res = mid;
                lo = mid+1;
            }else{
                if(b[i] < a[mid])hi = mid-1;

            }
        }
        if(res!=-1) cout<<res+1<<" ";
        else cout<<0;
    }
    cout<<endl;

  
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