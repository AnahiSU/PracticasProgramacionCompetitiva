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
    string s;
    int cont = 1;
    while(cin>>s){
        if(s != ""){
            cout<<"Case "<<cont<<":"<<endl;
            int n = s.size();
            int x; cin>>x;
            vector<int>sum(n);
            int suma = 0;
            sum[0] = s[0]-'0';
            for(int i = 1; i<n;i++){
                sum[i] = sum[i-1]  + (s[i]-'0');
            }
            
            while(x--){
                int li,ls; cin>>li>>ls;
                int aux = li;
                li = min(li,ls);
                ls = max(aux,ls);
                
                int res = sum[ls];
                if(li != 0){
                    res-= sum[li-1];
                }

                if(res == ls-li+1|| res == 0){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }
            cont++;
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