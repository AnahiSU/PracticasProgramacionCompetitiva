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
    
void printMat(auto a){
    for(auto k: a){
        cout<<k<<" ";
    }
    cout<<endl;
}
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    while(c--){
        int n,d,k; cin>>n>>d>>k;
        vector<int>ini(n+1),fin(n+1);
        for(int i = 0; i<k;i++){
            int a,b;cin>>a>>b;
            ini[a]++;fin[b]++;
        }

        vector<int>sumasIni(n+1),sumasFin(n+1);
        int sumita = ini[0];
        for(int i = 1; i<=n;i++){
            sumita += ini[i];
            sumasIni[i] = sumita;
        }
        sumita = fin[0];
        for(int i = 1; i<=n;i++){
            sumita += fin[i];
            sumasFin[i] = sumita;
        }
        //printMat(sumasIni);printMat(sumasFin);
        
        int maxi = -1,maxPos = 1;
        int mini = 1e8,minPos = 1;

        for (int i=d;i<=n;i++){
            int piv = sumasIni[i]-sumasFin[i-d];
            //cout<<"piv: "<<piv<<endl;
            if(maxi < piv){
                maxi = piv;
                maxPos = i-d+1;
            }
            //cout<<"maxi: "<<maxi<<" posM: "<<maxPos<<endl;
            if(mini > piv){
                mini = piv;
                minPos = i-d+1;
            }
            //cout<<"mini: "<<mini<<" posM: "<<minPos<<endl;

        }
        cout<<maxPos<<" "<<minPos<<endl;
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