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
    int c;cin>>c;
    while(c--){
        int a,b;
        cin>>a>>b;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int i = 0, j=0,cot=0;
        while(i<a && j<b){
            if(s1.at(i) == s2.at(j)){
                cot++;
                i++;j++;
            }else{
                j++;
            }
        }
        cout<<cot<<"\n";
    }
    
    return 0;
}