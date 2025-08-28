
/*
- Siempre de frente.
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
   int n; cin>>n;
   vector<vector<int>>g(n);
   vector<int>in(n),out(n);
   map<pair<int,int>,bool> direc;
   for(int i = 0; i<n-1;i++){
      int a,b; cin>>a>>b; a--;b--;
      g[a].push_back(b);
      in[b]++;
      out[a]++;
      direc[{a,b}] = true;
      direc[{b,a}] = false;
   }
   
   int q; cin>>q;
   // Leonel estuvo aqui (que es esto???)
   int cont = 0;
   int contAris =0;
   for(int i = 0; i<n;i++){
      if(in[i] == 0){
         cont++;
      }else if(in[i] > 1){
         contAris++;
      }
   }
   bool hayJefe = 1, esValid = 1;
   if(cont == 1){
      cout<<"DA"<<endl;
   }else{
      cout<<"NE"<<endl;
      hayJefe = 0;
      esValid = 1;
   }
   
   int contJefe = cont;

   while(q--){
      int a,b; cin>>a>>b;
      a--;b--;
      bool aris1 = in[a] > 1;
      bool aris2 = in[b] > 1;

      bool jefe = in[a] == 0 || in[b] == 0;
      if(direc[{a,b}]){
         in[a]++;
         in[b]--;
         direc[{a,b}] = false;
         direc[{b,a}] = true;
      }else{
         in[b]++;
         in[a]--;
         direc[{a,b}] = true;
         direc[{b,a}] = false;
      }
     
      if(in[a] == 1 && in[b] == 1){
         if(aris1){
            contAris--;
         }
         if(aris2){
            contAris--;
         }

         if(jefe){
            contJefe--;
            hayJefe = contJefe > 0 ? 1 : 0;
         }
      }else if(in[a] == 0 && in[b] == 1){
         if(aris1){
            contAris--;
         }
         if(aris2){
            contAris--;
         }

         if(!jefe) contJefe++;
         hayJefe = 1;
      }else if(in[b] == 0 && in[a] == 1){
         if(aris1){
            contAris--;
         }
         if(aris2){
            contAris--;
         }

         if(!jefe) contJefe++;
         hayJefe = 1;
      }else if(in[b] == 0 && in[a] == 0){
         if(aris1){
            contAris--;
         }
         if(aris2){
            contAris--;
         }

         if(!jefe) contJefe +=2;
         else contJefe++;
         hayJefe = 1;
      }else{
         if(in[a] == 0 || in[b] == 0){
            if(!aris1 || !aris2) contAris++;

            if(!jefe){
               contJefe++;
               hayJefe = 1;
            }
         }else{
            if(in[a] > 1) contAris++;
            if(in[b] > 1) contAris++;
            esValid = 0;
         }
      }
      if(esValid && hayJefe && contJefe == 1 && contAris == 0){
         cout<<"DA"<<endl;
      }else{
         cout<<"NE"<<endl;
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

