#include <bits/stdc++.h>

using namespace std;
signed main (){
  std::ios::sync_with_stdio(false);cin.tie(0);
  int c;
  cin>>c;
  while(c--){
    int a,b,k,aC=0,bC=0;
    vector<int> s1,s2;
    cin>>a>>b>>k;
    while(a--){
        int n;
        cin>>n;
        if(n>0 && n<7){
            s1.push_back(n);
        }
    }
    while(b--){
        int n;
        cin>>n;
        if(n>0 && n<7){
            s2.push_back(n);
        }
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    while(k>0){
        if(s1.back() == k){
            if(s2.back()==k){
                if(aC<bC){
                    aC++;s1.pop_back();
                }else{
                    bC++;s2.pop_back();
                }
            }else{
                aC++;
                s1.pop_back();
            }
        }else{
            if(s2.back()==k){
                bC++;
                s2.pop_back();
            }
        }
        while(s1.back() == k){
            s1.pop_back();
        }
        while(s2.back()==k){
            s2.pop_back();
        }
        k--;
    }
    

    (aC == k/2 && bC == k/2) ? cout<<"YES"<<"\n" : cout<<"NO"<<"\n";
  }
  
  return 0;
}