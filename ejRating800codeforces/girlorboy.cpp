#include <bits/stdc++.h>
 
using namespace std;
 
signed main ()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    string a;
    cin>>a;
    set<char> chars;
    for(int i = 0; i<a.length();i++){
        chars.insert(a.at(i));
    }
    if(chars.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<"\n";
    }else{
        cout<<"IGNORE HIM!"<<"\n";
    }
 
    return 0;
}