#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
    int c,cont = 0;
    string s;
    cin>>c>>s;
    for(int i = 0;i<c-1;i++){
        if(s[i]==s[i+1]){
            cont++;
        }
    }
    cout<<cont;

  return 0;
}