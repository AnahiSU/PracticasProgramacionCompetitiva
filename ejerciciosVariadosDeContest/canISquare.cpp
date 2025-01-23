#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  for(int i = 0; i<c; i++){
    int a;
    cin>>a;
    long long tot = 0;
    for(int j = 0; j<a; j++){
        long long n;
        cin>>n;
        tot += n;
    }
    long long raiz = sqrt(tot);
    if(raiz*raiz == tot){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

    }
    return 0;
}
