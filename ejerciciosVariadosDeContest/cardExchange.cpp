#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  for(int i = 0; i<c; i++){
    map<int,int> ls;
    int n,k;
    cin>>n>>k;
    for(int j = 0; j<n; j++){
        int a;
        cin>>a;
        ls[a]++;
    }
    map<int,int>::iterator it;
    bool res = false;
    for(auto&pair : ls){
        if(pair.second>=k){
            res = true;
        }
    }
    if(res) cout<<k-1<<"\n";
    else cout<<n<<"\n";
  }
  
  return 0;
}