
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
int c;
vector<int> v,sub;

int subseq(int posAct,bool t){
    if(posAct == c-1) return 1;
	if(posAct>c-1) return 0;
    if(sub[posAct] != 0) return sub[posAct];
    sub[posAct] = 1;
    for(int i = 1; i<c; i++){
		if(t){
			if(v[posAct+i] < v[posAct]){
                sub[posAct] = max(sub[posAct] , subseq(posAct+i,!t) +  1);
            }else{
               	break;
            }
        }else{
			if(v[posAct+i] > v[posAct]){
                sub[posAct] = max(sub[posAct] , subseq(posAct+i,!t) +  1);
            }else{
               	break;
            }

		}
	}

    return sub[posAct];
}

signed main (){
    std::ios::sync_with_stdio(false);cin.tie(0);
    cin>>c;
    v.resize(c);

    for(int i = 0; i<c; i++){
        cin>>v[i];
    }
    
    sub.assign(c,0);
    int res = 1;
    for(int i = 0; i<c; i++){
        res = max(res, subseq(i,true));
    }
     
    cout<<res;

  
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
