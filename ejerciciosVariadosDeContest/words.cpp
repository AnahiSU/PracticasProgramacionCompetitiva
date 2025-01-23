#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
    string s;
    int may = 0,min = 0;
    cin>>s;
    for(int i = 0; i<s.length();i++){
        if(s[i]<91 && s[i]>64){
            may++;
        }else{
            min++;
        }
    }
    if(may>min){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }else{
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }

    cout<<s;

  return 0;
}
