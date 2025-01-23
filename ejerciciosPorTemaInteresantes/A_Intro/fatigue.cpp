#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  vector<int> cans;
  vector<int> rev;
  int d = 0,c = 0,v = 0;
  cin>>d>>c>>v;

  for(int i = 0; i<c; i++){
    int a;
    cin>>a;
    cans.push_back(a);
  }
  for(int i = 0; i<v; i++){
    int a;
    cin>>a;
    rev.push_back(a);
  }

  int i = 0, j = 0, cont = 0;
  while((i < c && j < v)){
    if(cans.at(i)<= d){
        d-=cans.at(i);
        i++;
    }else{
        d+=rev.at(j);
        j++;
    }
    cont++;
  }
  if(j<v){
    cont+=v-j;
  }else{
      if(i<c){
          while(i<c && cans.at(i)<=d) {
              d-=cans.at(i);
              i++;
              cont++;
          }
      }
  }
  cout<<cont;
  return 0;
}