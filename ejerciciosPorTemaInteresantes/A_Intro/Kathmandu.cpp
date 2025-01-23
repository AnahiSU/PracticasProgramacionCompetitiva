#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int t,d,m;
  cin>>t>>d>>m;
  vector<int> l;
  for(int i = 0; i<m; i++){
    int n;
    cin>>n;
    l.push_back(n);
  }
  bool res = false;
  if(t<=d){
    if(m == 0 || l.at(0) >= t || d-l.at(l.size()-1) >= t){
        res = true;
    }else{
        for(int j = 0; j<l.size()-1; j++){
            if(l.at(j+1)-l.at(j)>=t){
                res = true;
                break;
            }
        }
    }
  }
  if(res) cout<<'Y';
  else cout<<'N';
  
  return 0;
}