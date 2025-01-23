#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  map<int,int> lis;
  cin>>c;
  for(int i = 0;i<c;i++){
    int n;
    cin>>n;
    lis.insert(make_pair(n,i));
  }
  //{1,2 2,1 3,0 4,4 5,3}
  int cont = 1;
  for(int i = c; i>0; i--){
    //cout<<i<<'='<<lis[i]<<endl;
    if(lis[i-1] < lis[i]){
      cont++;
    }
    
  }
  cout<<cont;

  return 0;
}