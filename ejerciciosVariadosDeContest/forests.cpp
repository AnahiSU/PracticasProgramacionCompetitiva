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
    int c;cin>>c;
    cin.ignore();
    while(c--){
        int p,t; cin>>p>>t;
        cin.ignore();
        vector<set<int>> arbs(p);
        int a,b;
        string aa;
        while(getline(cin,aa) && aa.size()){
            stringstream ayuda(aa);
            ayuda>>a>>b;
            a--;b--;
            arbs[a].insert(b);
        }
        int ans = 1;
        vector<bool> pers(p,false);
        set<set<int>> ls;
        for(int i = 0; i<p;i++){
            ls.insert(arbs[i]);
        }
        int res = (int)ls.size();
        cout<<res<<"\n";
        if(c) cout<<"\n";
        
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