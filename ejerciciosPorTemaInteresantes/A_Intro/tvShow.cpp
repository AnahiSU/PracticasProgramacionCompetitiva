#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int act = 100,max = 0,c;
  cin>>c;
  
  while(c--){
    int n;
    cin>>n;
    act+=n;
    if(act > max){
      max = act;
    }
  }

  if(max>100) cout<<max;
  else cout<<100;
  return 0;
}
