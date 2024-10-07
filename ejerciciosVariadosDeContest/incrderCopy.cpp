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
    int c; cin>>c; 
    while(c--){
        int a; cin>>a;
        vector <int> va, vb;
        va.assign(a+1,-1);
        vb.assign(a+1,-1);
        
        set<int> usados;

        for(int i = 0; i< a; i++){
            int f; cin>>f;
            va[i] = f;
        }
        for(int i = 0; i<a+1; i++){
            int f; cin>>f;
            vb[i] = f;
        }

        int cont = 0;
        for(int i = 0; i<a+1; i++){
            int aux = va[i];
            usados.insert(aux);
            if(aux != -1){
                
                if(aux<vb[i]){
                    
                    while(aux < vb[i]){
                        aux++;
                        usados.insert(aux);
                        cont++;
                    }
                    va[i] = aux;
                    
                }else{
                    while(aux > vb[i]){
                        
                        aux--;
                        usados.insert(aux);
                        cont++;
                    }
                    
                    va[i] = aux;
                }
                
            }else{
                for (auto it = usados.begin(); it != usados.end(); it++)
                    cout << *it << " ";
                cout<<endl<<vb[i]<<endl;
                int pos = *(usados.lower_bound(vb[i]));
                cont++;
                cout<<pos<<endl;
                if(pos > vb[i]){
                    while(pos<vb[i]){
                        pos--;
                        cont++;
                    }
                    
                }else{
                    while(pos<vb[i]){
                        pos++;
                        cont++;
                    }
                    
                }
            }
            
        }
        cout<<cont<<"\n";


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