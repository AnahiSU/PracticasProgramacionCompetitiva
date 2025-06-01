/*
- Deja ir el pasado y camina hacia el futuro.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Del fracaso se aprende, del éxito no mucho.
- Para sentirse vivo se necesita una meta en la que trabajar.
- ¡Demonios Rocky! No hay ningún mañana.
*/

#define srt(a) sort(a.begin(),a.end())
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define sz(v) (int)v.size()

using namespace std;


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int k; cin>>k;
   while(k--){
      int a,b,c; cin>>a>>b>>c;
      string s; cin>>s;
      string res = "";
      char ant =s[0];
      vector<int>frec;
      
      int cont = 1;
      res.push_back(s[0]);
      for(int i = 1; i<sz(s);i++){
         if(s[i]!=ant){
            frec.push_back(cont);
            res.push_back(s[i]);
            cont = 1;
         }else{
            cont++;
         }
         ant = s[i];
      }
      frec.push_back(cont); 
      if(sz(res) <=2){
         if(sz(res) == 2){
            int act = res[0] == 'A' ? a:b;
            if(act <= c){
               cout<<1<<endl;
            }else{
               cout<<frec[0]+1<<endl;
            }
         }else{
            int act = res[0] == 'A' ? a:b;
            if(act<=c){
               cout<<1<<endl;
            }else{
               cout<<frec[0]<<endl;
            }
         }
      }else{
        
         int sumM = 0;
         for(int i = 0; i<sz(res);i++){
            sumM += (res[i] == 'A' ? a:b);
         }
         int ind = 0;
         for(int i = 0; i<sz(res);i++){
            int act = (res[i] == 'A' ? a:b);
            if(sumM - act <= c){
               ind = i;
               break;
            }else{
               sumM-=act;
            }
         }
         int respuesta = 0;
         for(int i = 0 ;i<=ind;i++){
            respuesta+=frec[i];
         }
         cout<<respuesta+1<<endl;
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

