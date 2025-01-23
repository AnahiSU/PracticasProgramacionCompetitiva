#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int n,h,c = 0;
  cin>>n,h;

  for(int i = 0; i<n;i++){
    int b;
    cin>>b;
    if(b<=h){
        c++;
    }
  }
  cout<<c;
  return 0;
}