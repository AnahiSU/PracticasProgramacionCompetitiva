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
int N = 0;
vector<int>dulc,ord;
vector<bool> visi;
vector<vector<int>> dp(105,vector<int>(10005,-10002));
int sum = 0;

int repar(int pos, int suma){
    if(suma == sum/2) return suma;
    if(pos < 0) return -102;
    if(dp[pos][suma] != -10002) return dp[pos][suma];
    if(suma > sum/2) return -102;

    int tom = repar(pos-1,suma+dulc[pos]);
    if(tom == sum/2){
        dp[pos][suma] = tom;
        ord.push_back(dulc[pos]);
        visi[pos] = true;
        
    }else{
        int sinTom = repar(pos-1,suma);
        dp[pos][suma] = sinTom;
    }
    return dp[pos][suma];

}  

void printVec(auto vec){
    for(auto j : vec){
        cout<<j<<" ";
    }
    cout<<endl;
}

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>N;
    dulc.resize(N);
    vector<int> noVisi;
    visi.resize(N,false);
    vector<int> res;
    for(int i = 0; i<N;i++){
        cin>>dulc[i];
        sum+=dulc[i];
    }
    if(sum % 2 == 0){
        repar(N-1,0);
        if(ord.size()<1){
            cout<<-1<<endl;
        }else{
            //simulacion
            //printVec(ord);
            for(int i = 0; i<N;i++){
                if(!visi[i]){
                    noVisi.push_back(dulc[i]);
                }
            }
            //printVec(noVisi);
            int j = 1;
            int i = 0;
            int alice = 0,bob = 0;
            res.push_back(ord[0]);
            alice = ord[0];
            while(j<ord.size() && i<noVisi.size()){
                if(alice > bob){
                    res.push_back(noVisi[i]);
                    bob+=noVisi[i];
                    i++;
                    // cout<<"Alice: "<<alice<<endl;
                    // cout<<"Bob: "<<bob<<endl;
                }else{
                    res.push_back(ord[j]);
                    alice+=ord[j];
                    j++;
                    // cout<<"Alice: "<<alice<<endl;
                    // cout<<"Bob: "<<bob<<endl;
                }
            }
            // cout<<j<<" "<<i<<endl;
            // cout<<ord.size()<<" "<<noVisi.size()<<endl;
            if(j >= ord.size()){
                while(i<noVisi.size()){
                    res.push_back(noVisi[i]);
                    i++;
                }
            }else{
                while(j<ord.size()){
                    res.push_back(ord[j]);
                    j++;
                }
            }

            for(int i:res){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<-1<<endl;
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