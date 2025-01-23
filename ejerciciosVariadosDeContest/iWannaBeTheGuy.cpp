#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int n,p,q;
  set<int> l;
  cin>>n>>p;
  for(int i = 0; i<p; i++){
    int c;
    cin>>c;
    l.insert(c);
  }
  cin>>q;
  for(int i = 0; i<q; i++){
    int c;
    cin>>c;
    l.insert(c);
  }

  l.size() == n? cout<<"I become the guy.": cout<<"Oh, my keyboard!";

  return 0;

}