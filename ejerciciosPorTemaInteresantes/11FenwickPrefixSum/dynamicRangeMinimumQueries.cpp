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

struct segtree { 
    ll n;
    vector<ll> tree;

    void init(ll nn) {
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
                tree[i] = diff;
            } else {
                ll mid = (sl + sr) / 2;
                update(i * 2 + 1, sl, mid, pos, diff);
                update(i * 2 + 2, mid + 1, sr, pos, diff);
                tree[i] = min(tree[i * 2 + 1], tree[i * 2 + 2]);
            }
        }
    }

    void update(int pos, ll diff) {
        update(0, 0, n - 1, pos, diff);
    }

    ll query(int i, int sl, int sr, int l, int r) {
        if (l <= sl && sr <= r) {
            return tree[i];
        } else if(sr < l || r < sl) {
            return INT64_MAX;
        } else {
            int mid = (sl + sr) / 2;
            auto a = query(i * 2 + 1, sl, mid, l, r);
            auto b = query(i * 2 + 2, mid + 1, sr, l, r);
            return min(a, b);
        }
    }

    ll query(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }
};

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);
    segtree st;
    ll nn; cin>>nn;
    ll q; cin>>q;
    st.init(nn);
    for(ll i = 0; i<nn;i++){
        ll x; cin>>x;
        st.update(i,x);
    }

    for(ll i = 0; i<q;i++){
        ll l,a,b; cin>>l>>a>>b;
        a--;
        if(l == 1){
            st.update(a,b);
        }else{
            b--;
            cout<<st.query(a,b)<<"\n";
        }
    }

  
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