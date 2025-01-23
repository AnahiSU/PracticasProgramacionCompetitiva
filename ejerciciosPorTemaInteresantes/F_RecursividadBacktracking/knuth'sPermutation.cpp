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
string s;
int n;
vector<string>res;
void knuth(string s1){
    if(s1.size() == n){
        res.push_back(s1);
    }else{
        char aux = s[s1.size()];
        s1 = aux + s1;
        knuth(s1);
        for(int i = 0; i<(int)s1.size()-1;i++){
            swap(s1[i],s1[i+1]);
            knuth(s1);
        }
    }
}   
signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    bool ini = true;
    while(cin>>s){
        if(ini) ini =false;
        else cout<<endl;
        n = (int)s.size();
        string aux = "";
        char ini = s[0];
        aux.push_back(ini);
        knuth(aux);
        for(string s1 : res){
            cout<<s1<<endl;
        }
        
        aux.clear();
        res.clear();
        n = 0;
        s.clear();
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