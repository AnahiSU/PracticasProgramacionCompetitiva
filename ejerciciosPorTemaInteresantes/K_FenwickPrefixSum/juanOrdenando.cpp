/*
- Science is knowledge which we understand so well
  that we can teach it to a computer; and if we don’t
  fully understand something, it is an art to deal with it.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
  lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/
    
typedef long long ll;
#define srt(a) sort((a).begin(),(a).end());
#define srtR(a) sort((a).rbegin(),(a).rend());
    
#include <bits/stdc++.h>
using namespace std;

struct segtreeMaxMin{ 
    //el maximo es el first y el minimo es el second
    int n;
    vector<pair<ll,ll>> tree;

    void init(int nn) {
        tree.clear();
        n = nn;
        int size = 1;
        while (size < n) {
            size *= 2;
        }
        tree.resize(size * 2);
    }

    void update(int i, int sl, int sr, int pos, ll diff) {
        if (sl <= pos && pos <= sr) {
            if (sl == sr) {
                tree[i] = {tree[i].first+diff,tree[i].second+diff};
            } else {
                int mid = (sl + sr) / 2;
                update(i * 2 + 1, sl, mid, pos, diff);
                update(i * 2 + 2, mid + 1, sr, pos, diff);
                tree[i] = {max(tree[i * 2 + 1].first, tree[i * 2 + 2].first),min(tree[i * 2 + 1].second, tree[i * 2 + 2].second)};
            }
        }
    }

    void update(int pos, ll diff) {
        update(0, 0, n - 1, pos, diff);
    }

    pair<ll,ll> query(int i, int sl, int sr, int l, int r) {
        if (l <= sl && sr <= r) {
            return tree[i];
        } else if(sr < l || r < sl) {
            return{INT64_MIN,INT64_MAX};
        } else {
            int mid = (sl + sr) / 2;
            auto a = query(i * 2 + 1, sl, mid, l, r);
            auto b = query(i * 2 + 2, mid + 1, sr, l, r);
            return {max(a.first,b.first),min(a.second,b.second)};
        }
    }

    pair<ll,ll> query(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }
};

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    int n; cin>>n;
    segtreeMaxMin sgtree;
    sgtree.init(n);
    vector<int>v(n),aux(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
        sgtree.update(i,v[i]);
    }
    int cont = 0;
    vector<int> res;
    for(int i = 0; i<n ;i++){
        //cout<<"------"<<endl;
        //cout<<"para: "<<v[i]<<endl;
        int valIz = sgtree.query(0,i-1).first;
        //cout<<"men:"<<valIz<<endl;
        int valDer = sgtree.query(i+1,n).second;
        //cout<<"may: "<<valDer<<endl;
        if(i > 0 && i < n-1){
            if(valIz <= v[i] && valDer >= v[i]){
                cont++;
                res.push_back(v[i]);
            }
        }else{
            if(i == 0){
                if(valDer >= v[i]){
                    cont++;
                    res.push_back(v[i]);
                }
            }else{
                if(valIz <= v[i]){
                    cont++;
                    res.push_back(v[i]);
                }
            }
        }
    }
    if(cont>0){
        cout<<cont<<" ";
        for(int i=0;i<cont;i++){
            cout<<res[i];
            if(i != res.size()-1) cout<<" ";
        }
    }else{
        cout<<0;
    }

    cout<<endl;
  
    return 0;
}

//                   :-==-.                     .:..                   
//                .+%@@@@@@#-                -*%@@@@#+.                            
//              .%@@@@@@@@@@%*=--:.....::--+#@@@@@@@@@@@=              
//              +@@@@@@@%*-.                 .-*%@@@@@@@%              
//              +@@@@@%=.                       .=%@@@@@@.             
//              -@@@@*.                           .+@@@@%              
//               +@@+    ..                         =@@%:              
//                -*  :*%@@@*.             :+#%#+.   +#:               
//                =. =@@@*=+@%            :%@##@@@+  .+                
//                + -@@@@.  #@:  :-----   *@=  +@@@+  +                
//               .+ #@@@@#+*@%.  *@@@@%.  +@#:-#@@@@: =.               
//               .=  @@@@@@@@+    .=*:     :@@@@@@@@= -:                             
//                + :**%@%*:     .-=+--     :#@@%**+  +                
//                +.---:.                     .----- .=                                
//                 :=                               +.                 
//                    :=-.                     .-=:                                         
//                           .:-----------:.   