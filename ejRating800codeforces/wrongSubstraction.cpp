#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
    int c,k;
    cin>>c>>k;
    while(k>0){
        if(c%10 != 0){
            c -= 1;
        }else{
            c /= 10;
        }
        k--;
    }
    

  return 0;
}