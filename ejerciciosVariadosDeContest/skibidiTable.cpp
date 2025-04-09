
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
vector<int>pot4(30);


void potencias(){
   pot4[0] = 1;
   for(int i = 1; i<30; i++){
      pot4[i] = 4*pot4[i-1];
   }
}

int numberOn(int x, int y,int x1, int x2, int y1,int y2, int n, int mini){
   int res = 0;
   int pot = 1<<n;
   if(n == 0){
      return mini;
   }

   int midX = (x1+x2)/2;
   int midY = (y1+y2)/2;

   //primer cuadrante
   if(x<=midX && y<=midY){
      res = numberOn(x,y, x1,midX,y1,midY, n-1, mini); 
   }else if(x>midX && y>midY){
      //segundo cuadrante
      res = numberOn(x,y, midX+1,x2,midY+1,y2, n-1,mini+(1*pot4[n-1]));
   }else if(x>midX && y<=midY){
      //tercer cuadrante
      res = numberOn(x,y, midX+1,x2,y1,midY, n-1,mini+(2*pot4[n-1]));
   }else{
      //cuarto cuadrante
      res = numberOn(x,y, x1,midX,midY+1,y2, n-1,mini+(3*pot4[n-1]));
   }
   return res;
}

pair<int,int> cordinateOf(int num,int n,int min,int max,int x, int y){
   pair<int,int>res;
   if(n==0){
      return {x,y};
   }
   int tam = (1<<n);
   int mid = tam/2;
   if(num >= min && num <= max - 3*pot4[n-1]){
      //primer cuadrante
      res = cordinateOf(num, n-1, min, max - 3*pot4[n-1],x,y );
   }else if(num >= min + 1*pot4[n-1] && num <= max-2*pot4[n-1]){
      //segundo cuadrante
      res = cordinateOf(num,n-1,min + 1*pot4[n-1], max-2*pot4[n-1],x+mid,y+mid);
   }else if(num >= min + 2*pot4[n-1] && num <= max-1*pot4[n-1]){
      //tercer cuadrante
      res = cordinateOf(num,n-1, min + 2*pot4[n-1], max-1*pot4[n-1], x+mid,y);
   }else{
      //cuarto cuadrante
      res = cordinateOf(num,n-1, min +3*pot4[n-1], max, x,y+mid);
   }
   return res;
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int c; cin>>c;
   potencias();

   cout<<endl;
   while(c--){
      int n, q; cin>>n>>q;
      while(q--){
         string s; cin>>s;
         if(s == "->"){
            int x,y; cin>>x>>y;
            cout<<numberOn(x,y,1,(1<<n),1,(1<<n), n, 1)<<endl;
         }else{
            int x; cin>>x;
            int max = (1LL<<n)*(1LL<<n);
            pair<int,int>cords = cordinateOf(x, n, 1,max,1,1);
            cout<<cords.first<<' '<<cords.second<<endl;
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

