#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
    string s2,s1;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1<s2){
        cout<<-1;
    }else{
        if(s1>s2){
            cout<<1;
        }else{
            cout<<0;
        }
    }

  return 0;
}
