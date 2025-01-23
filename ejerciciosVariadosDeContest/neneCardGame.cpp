#include <bits/stdc++.h>
 //algoritmo euclediano
using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  

  cin>>c;
  for(int i = 0; i<c; i++){
    int a;
    cin>>a;
    int cont = 0;
    vector<int> lis;
    for(int j = 0; j<a ; j++){
      int n;
      cin>>n;
      
      lis.push_back(n);
    }
    sort(lis.begin(),lis.end());
    for(int j = 0; j<a-1;j++){
      if(lis.at(j) == lis.at(j+1)){
        cont++;
        j +=1;
      }
    }
    cout<<cont<<"\n";


  }
  
  return 0;
}