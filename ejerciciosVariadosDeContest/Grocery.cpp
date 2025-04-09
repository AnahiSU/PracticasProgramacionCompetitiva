
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
//#define int long long
#define sz(v) (int)v.size()

using namespace std;

vector<int> get_vector(int n) {
  if (n == 3 || n == 8) {
    return {9,4,8,3};
  }
  return {8,3,7,2};
}

int redon(int x){
   return (x%10 <= 2) ? (x/10) *10 : ((x/10)*10)+5; 
}

signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   int n; cin>>n;
   vector<int>v(n);
   for(int i = 0; i<n;i++){
      string s; cin>>s;
      stringstream ss(s);
      string token; string num ="";
      while(getline(ss,token,'.')){
         num.append(token);
         v[i] = stoi(num);
      }
   }   

   vector<int>v2(10);
   int res = 0;
   for(int i = 0; i<n;i++){
      int x = v[i]%10;
      if(x == 4 || x == 3 || x == 8 || x == 9){
         vector<int>aux = get_vector(x);
         bool found = 0;
         for(int j : aux){
            if(v2[j]){
               res+= redon(v2[j]+v[i]);
               v2[j] = 0;
               found = 1;
               break;
            }

         }
         if(!found){
            v2[x] = v[i];
         }
      }else{
         res+= redon(v[i]);

      }
   }
   res+=accumulate(v2.begin(),v2.end(),0);

   //cout<<fixed<<setprecision(2)<<res/100.0<<endl;
   string resS = to_string(res);
   string y = "0";
   y.append(resS);
   cout << res / 100 << '.' << y[int(y.size()) - 2] << y.back()<< endl;

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

