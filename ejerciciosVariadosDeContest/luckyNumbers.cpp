#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
    int cont = 0;
    long long c;
    cin>>c;
    while(c>0){
        if(c%10 == 4 || c%10 == 7){
            cont++;
        }
        c/=10;
    }
    
    if(cont == 4 || cont == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

  return 0;
}