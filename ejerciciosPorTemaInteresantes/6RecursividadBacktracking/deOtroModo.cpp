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
vector<ll>fact;
ll n;
set<vector<ll>>ls;

void contar(ll sum,ll cant,vector<ll> st,int pos){
    if(cant == 4 && sum == n){
        srt(st);
        ls.insert(st);
    }
    if(cant < 4){ 
        if(sum == n){
            srt(st);
            ls.insert(st);
        }else{
            for(int i = pos; i<fact.size();i++){
                if(find(st.begin(),st.end(),-fact[i]) == st.end()){
                    st.push_back(fact[i]);
                    contar(sum+fact[i],cant+1,st,i);
                    st.pop_back();
                }
                if(find(st.begin(),st.end(),fact[i]) == st.end()){
                    st.push_back(-fact[i]);
                    contar(sum-fact[i],cant+1,st,i); 
                    st.pop_back();
                }  
            }

        }
    }
}

signed main (){
    
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n;
    //fact.push_back(0);
    for(int i = 1; i*i<=n;i++){
        fact.push_back(i*i);
    }
    
    vector<ll> aux;
    contar(0,0,aux,0);
    cout<<ls.size()<<endl;
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