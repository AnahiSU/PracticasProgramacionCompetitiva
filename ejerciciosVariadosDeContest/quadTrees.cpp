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

int recorrer(string& s, int pos){
    int rec = 1;
    for(int i = 0; i<4;i++){
        if(s[pos] == 'p') {
            int aux = recorrer(s,pos+1);
            rec += aux;
            pos += aux;
        }else{
            pos++;
            rec++;
        }
    }   
    return rec;
}
//pefff
int contarF (string& s, int pos, int n){
    int res = 0;
    for(int i = 0; i<4;i++){
        //cout<<"en pos: "<<pos<<"-> "<<res<<endl;
        if(s[pos] == 'f'){
            res+=n;
            pos++;
        }else if(s[pos] == 'p'){
            res+= contarF(s,pos+1,n/4);
            pos+= recorrer(s,pos+1);
        }else{
            pos++;
        }
    }
    return res;
}

int sobrante(string& s, int pos,int n){
    
    int res = 0;
    for(int i = pos; i<s.size();i++){
        if(s[i]== 'f'){
            res+=n;
        }else if(s[i] == 'p'){
            res+=contarF(s,i+1,n/4);
            i += recorrer(s,i+1)-1;
        }
    }
    return res;
}

int juntar(string& s1, string& s2, int pos1, int pos2, int n){
    
    int res = 0;
    //cout<<"en pos: "<<pos1<<" "<<pos2<<endl;
    //padre padre
    if(pos1 >= s1.size() || pos2 >= s2.size()){

        if(pos1 >=s1.size()){
            if(pos2<s2.size()-1){
                
                res+= sobrante(s2,pos2,n);
            }
        }else{
            if(pos1<s1.size()-1){
                
                res+= sobrante(s1,pos1,n);
            }
        }
        return res;
    }
    if(s1[pos1] == 'p' && s2[pos2] == 'p'){
        //cout<<pos1<< "#"<<pos2<<endl;
        int ayuda1 = recorrer(s1,pos1+1);
        int ayuda2 = recorrer(s2,pos2+1);
        string a1 =s1.substr(pos1,ayuda1);
        //cout<<a1<<endl;
        string a2 =s2.substr(pos2,ayuda2);
        //cout<<a2<<endl;
        res += juntar(a1,a2,pos1+1,pos2+1,n/4);
        if(ayuda1 < s1.size()-1 && ayuda2 < s2.size()-1 )res+=juntar(s1,s2, pos1+ayuda1,pos2+ayuda2,n);
        //ptm

    }else if(s1[pos1] == 'f'){
        //full y cualquier cosa
        res += n;
        if(s2[pos2] == 'p'){
            //full padre
            //iterar en pos2 la desc de s2[pos2]
            pos2 += recorrer(s2,pos2+1);
            res+=juntar(s1,s2,pos1+1,pos2,n);
        }else{
            res+=juntar(s1,s2,pos1+1,pos2+1,n);
        }
        
    }else if(s2[pos2] == 'f'){
        //cualquier cosa y full
        res += n;
        if(s1[pos1] == 'p'){
            //padre y full
            //iterar en pos1 la desc de s1[pos1]
            pos1 += recorrer(s1,pos1+1);
            res+=juntar(s1,s2,pos1,pos2+1,n);
        }else{
            res+=juntar(s1,s2,pos1+1,pos2+1,n);
        }
        
    }else if(s1[pos1] == 'p'){
        //padre y empty
        //si solo hay desc en s1
        //contar devuelve los fulls en un solo string
        res += contarF(s1,pos1+1,n/4);
        pos1+= recorrer(s1,pos1+1);
        res += juntar(s1,s2,pos1,pos2+1,n);

    }else if(s2[pos2] == 'p'){
        //empty y padre
        res+= contarF(s2,pos2+1,n/4);
        pos2 += recorrer(s2,pos2+1);
        res+= juntar(s1,s2,pos1+1,pos2,n);
    }else{
        //empty y empty
        res += juntar(s1,s2,pos1+1,pos2+1,n);
    }
    //cout<<pos1<<"<<"<<pos2<<" "<<"aaaa: "<<res<<endl;
    return res;
}

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int c; cin>>c;
    while(c--){
        string arb1,arb2;
        cin>>arb1>>arb2;
        cout<<"There are "<<juntar(arb1,arb2,0,0,1024)<<" black pixels."<<endl;
        //int arbTot = juntar(arb1,arb2,1,1,256);
        //cout<<arbTot<<endl;
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