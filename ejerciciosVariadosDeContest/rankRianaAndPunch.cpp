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
#define ll long long
#define sz(v) (int)v.size()

using namespace std;

ll buscar(vector<bool> &MST,vector<ll> &distancias){
   ll indice=-1;
   ll minimo=1e9;
   for(ll i=0;i<distancias.size();i++){
        if(distancias[i]<minimo){
            minimo=distancias[i];
            indice=i;
        }
   }
   return indice;
}



void prim(map<ll,vector<pair<ll,ll>>> &mapa,vector<bool> &MST,vector<ll> &distancias){
   distancias[0]=0;
   for(ll i=1;i<=distancias.size()-1;i++){
        ll nodo=buscar(MST,distancias);
        assert(nodo >= 0);
        MST[nodo]=true;
        
   }
}


signed main (){
   std::ios::sync_with_stdio(false);cin.tie(0);
   string texto;
   cin>>texto;
   cout<<"dsadad"<<endl;
   ll dist=0;
   ll indice=-1;
   ll nodo=0;
   map<ll,vector<pair<ll,ll>>> mapa;
   for(ll i=0;i<texto.size();i++){
      if(texto[i]=='X'){
        for(ll j=i+1;j<texto.size();j++){
            if(texto[j]=='X'){
                mapa[i].push_back(pair(j,dist));
                mapa[j].push_back(pair(i,dist));
                dist=0;
                break;
            }
            else{
                dist++;
            }
        }
        nodo++;
      }
   }
   cout<<"dsdwdw"<<endl;
   dist=0;
   ll indice1;
   ll indice2;
   for(ll i=texto.size()-1;i>=0;i--){
      if(texto[i]!='X'){
        dist++;
      }
      else{
        indice1=i;
        break;
      }
   }
   for(ll i=0;i<texto.size();i++){
    if(texto[i]!='X'){
        dist++;
      }
      else{
        indice2=i;
        break;
      }
   }
   cout<<"khiukj"<<endl;
   mapa[indice1].push_back(pair(indice2,dist));
   mapa[indice2].push_back(pair(indice1,dist));
   vector<bool> MST(nodo+1,false);
   vector<ll> distancias(nodo+1,1e9);
   prim(mapa,MST,distancias);
   ll suma=0;
   for(ll elemento:distancias){
        if(elemento!=1e9){
            suma+=elemento;
        }
   }
   cout<<0<<endl;
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

