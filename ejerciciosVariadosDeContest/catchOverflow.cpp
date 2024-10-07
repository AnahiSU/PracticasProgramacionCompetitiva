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
    ll n; cin>>n;
    stack<string> op;
    stack<ll> nums;
    ll var = 0;
    ll lim = (1LL<<32LL)-1LL;

    bool overflow = false;
    
    while(n--){
        string s; cin>>s;
        if(overflow == false){
            if(s == "end"){      
                ll aux = 0;          
                while(op.top()!="for"){
                    if(op.top() == "add"){
                        aux++;
                    }else{
                        aux+= stoll(op.top());
                    }
                    if(aux > lim){
                        overflow = true;
                        cout<<"OVERFLOW!!!"<<endl;
                        return 0;
                    }
                    op.pop();
                }
                aux*=nums.top();
                
                if(aux > lim){
                    overflow = true;
                    cout<<"OVERFLOW!!!"<<endl;
                    return 0;
                }
                nums.pop();
                op.pop();
                if(aux >lim){
                    cout<<"OVERFLOW!!!"<<endl;
                    return 0;
                }
                op.push(to_string(aux));

            }else{
                if(s == "for"){
                    ll k; cin>>k;
                    nums.push(k);
                    op.push(s);
                }else{
                    op.push(s);
                }
            }
        }
        
        
    }
    ll res = 0;
    if(op.empty()){
        res = stoll(op.top());
        op.pop();
    }
    while(!op.empty()){
        if(op.top() == "add")res+=1;
        else res+=stoll(op.top());
        op.pop();
    }

    if(res>lim) overflow = true;

    (overflow) ? cout<<"OVERFLOW!!!"<<endl :cout<<res<<endl ;
  
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