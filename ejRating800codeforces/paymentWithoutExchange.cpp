#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  for(int i = 0; i<c;i++){
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    if(n<s){
        if( b <= s || ((s/n) * a) == ((s/n) * a) || ((s/n) * a) - s <= b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
  }

  return 0;

}