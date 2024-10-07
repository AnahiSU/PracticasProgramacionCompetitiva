#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  string s;
  cin>>s;
  int k;
  cin>>k;
  int i = 0, cont = 0;
  while(cont<s.size()-k){
    if(i+k<s.size()){
        if(s[i]>s[i+k]){
            char aux = s[i];
            s[i] = s[i+k];
            s[i+k] = aux;
        }else{
            cont++;
        }
        i++;
    }else{
        i = 0;
        cont = 0;
    }
    if(i+k>=s.size()){
        if(cont<s.size()-k){
            cont = 0;
            i = 0;
        }
    }
    
  }
  cout<<s;

  return 0;
}