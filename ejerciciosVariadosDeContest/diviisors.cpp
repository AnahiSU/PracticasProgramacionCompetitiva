#include <bits/stdc++.h>
 //algoritmo euclediano
using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  for(int i = 0; i<c;i++){
    long long a,b;
    cin>>a>>b;
    long long auxA = a,auxB = b;
    while(auxB%auxA != 0){
        long long ab = auxB;
        auxB = auxA;
        auxA = ab % auxA;
    }
    long long res = (a*b)/auxA;
    
    (b%a == 0) ? cout<<b*(b/a)<<"\n": cout<<res<<"\n";      
    
      
  }
 
  
  return 0;
}