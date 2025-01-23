/*
- Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar
*/

#include <bits/stdc++.h>

using namespace std;
 
signed main ()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    string s;
    cin>>s;
    string pv = "heidi";
    int j = 0, i = 0,c=0;
    while(i<s.size()&&j<5){
        if(s.at(i) == pv.at(j)){
            i++;j++;
            c++;
        }else{
            i++;
        }
    }
    if(c>=5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}