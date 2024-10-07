/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort(a.begin(),a.end());
    
#include <bits/stdc++.h>
    
using namespace std;
signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    double a,b,c;
    cin>>a>>b>>c;
    double disc = pow(b,2)-(4*a*c);
    if(a == 0 && b == 0){
        if(c == 0){
            cout<<-1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }else{
        if(a == 0){
            cout<<1<<"\n";
            cout<<fixed<<setprecision(6)<<(-c/b)<<"\n";
        }else{
            if(disc == 0){
                cout<<1<<"\n";
                cout<<fixed<<setprecision(6)<<-b/(2*a)<<"\n";
            }else{
                if(disc < 0){
                    cout<<0<<"\n";
                }else{
                    cout<<2<<"\n";
                    double res1 = (-b + sqrt(disc))/(2*a);
                    double res2 = (-b - sqrt(disc))/(2*a);
                    
                    cout<<fixed<<setprecision(6)<<min(res1,res2) <<"\n";
                    cout<<fixed<<setprecision(6)<<max(res1,res2) <<"\n";
                }
            }
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