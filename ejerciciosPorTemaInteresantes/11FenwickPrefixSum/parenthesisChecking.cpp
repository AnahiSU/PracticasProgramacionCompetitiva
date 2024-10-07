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

//estructura de los nodos del arbol
struct Node {
    //(sumaTot, minInter)
    pair<ll,ll> val;
    void init(pair<ll,ll> l){
        val = l;
    }
    ll getSum(){
        return val.first;
    }
    ll getMin(){
        return val.second;
    }
};

//elemento neutro
Node e() {
    Node node;
    node.init({0,0});
    return node;
}

//la operacion con los nodos
Node op(Node izq, Node der) {
    Node node;
    node.init({izq.getSum()+der.getSum(), 
                min(izq.getMin(), izq.getSum() + der.getMin())});
    return node;
}

// >>>>>>>> Implement 

struct segtree { 
    vector<Node> nodes;
    ll n;

    void init(int n) {
        auto a = vector<Node>(n, e());
        init(a);
    }

    //calcula el tamaño con potencias de 2
    void init(vector<Node>& initial) {
        nodes.clear();
        n = initial.size();
        int size = 1;
        while (size < n) {
            size *= 2;
        }
        nodes.resize(size * 2);
        build(0, 0, n-1, initial);
    }

    void build(int nodoAct, int sl, int sr, vector<Node>& initial) {
        if (sl == sr) {
            nodes[nodoAct] = initial[sl];
        } else {
            ll mid = (sl + sr) >> 1;
            build(nodoAct*2+1, sl, mid, initial);
            build(nodoAct*2+2, mid+1,sr,initial);
            nodes[nodoAct] = op(nodes[nodoAct*2+1], nodes[nodoAct*2+2]);
        }
    }

    void update(int nodoAct, int sl, int sr, int pos, Node node) {
        if (sl <= pos && pos <= sr) {
            if (sl == sr) {
                nodes[nodoAct] = node;
            } else {
                ll mid = (sl + sr) >> 1;
                update(nodoAct * 2 + 1, sl, mid, pos, node);
                update(nodoAct * 2 + 2, mid + 1, sr, pos, node);
                nodes[nodoAct] = op(nodes[nodoAct*2+1], nodes[nodoAct*2+2]);
            }
        }
    }

    void update(ll pos, Node node) {
        update(0, 0, n - 1, pos, node);
    }

    Node query(int nodoAct, int sl, int sr, int l, int r) {
        if (l <= sl && sr <= r) {
            return nodes[nodoAct];
        } else if(sr < l || r < sl) {
            return e();
        } else {
            int mid = (sl + sr) / 2;
            auto a = query(nodoAct * 2 + 1, sl, mid, l, r);
            auto b = query(nodoAct * 2 + 2, mid + 1, sr, l, r);
            return op(a, b);
        }
    }

    Node query(int l, int r) {
        return query(0, 0, n - 1, l, r);
    }

    Node get(int i) {
        return query(i, i);
    }
};

signed main (){
    ios::sync_with_stdio(false);cin.tie(0);

    ll c; cin>>c;
    ll q; cin>>q;
    segtree arb;
    arb.init(c);
    string paren;
    for(int i = 0; i<c; i++){
        char x; cin>>x;
        if(x == '('){
            Node nodo;
            nodo.init({1,0});
            arb.update(i,nodo);
        }else{
            Node nodo;
            nodo.init({-1,-1});
            arb.update(i,nodo);
        }
        paren.push_back(x);
    }

    for(int i = 0; i<q; i++){
        ll k,l,r; cin>>k>>l>>r;
        l--;r--;
        if(k == 1){
            if(paren[r] == '('){
                Node nodo;
                nodo.init({1,0});
                arb.update(l,nodo);
            }else{
                Node nodo;
                nodo.init({-1,-1});
                arb.update(l,nodo);
            }
            if(paren[l] == '('){
                Node nodo;
                nodo.init({1,0});
                arb.update(r,nodo);
            }else{
                Node nodo;
                nodo.init({-1,-1});
                arb.update(r,nodo);
            }
            swap(paren[l],paren[r]);
        }else{
            Node nod = arb.query(l,r);
            if(nod.getMin() == 0 && nod.getSum() ==0){
                cout<<"Yes";
            }else{
                cout<<"No";
            }
            cout<<'\n';
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