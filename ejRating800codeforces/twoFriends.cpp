#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);

  int c;
  cin>>c;
  for(int i = 0 ; i<c; i++){
    vector<int> lis;
    int b;
    cin>>b;
    for(int j = 0; j<b; j++){
        lis.push_back(b);
    }
    bool res = false;
    for(int j = 0; j<b; j++){
        if(lis.at(j) == lis.at(lis.at(j)-1)){
            res = true;
        }
    }

    if(res) cout<<2;
    else cout<<3;
  }
  
  return 0;
}