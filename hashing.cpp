/*
               __
              / _)
     _.----._/ /
    /         /
 __/ (  | (  |
/__.-'|_|--|_|
*/
#include <bits/stdc++.h>
 //#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <bits/extc++.h>
typedef long long ll;
#define int long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(a) (a).begin(), (a).end()
#define clr(a, h) memset(a, (h), sizeof(a))
#define f first
#define s second
#define fore(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define forr(i, b, e) for (int i = (int) b, o_o = e; i < (int) o_o; ++i)
#define deb(x) cerr << "# " << (#x) << " = " << (x) << endl;
#define sz(x) (int) x.size()
#define endl '\n'
// int in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

using namespace std;
#define cin std::cin
#define cout std::cout
#define cerr std::cerr
//using namespace __gnu_pbds;
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < ll > vll;
typedef vector < vi > vvi;
typedef vector < vii > vvii;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//find_by_order kth largest  order_of_key <
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int INF = numeric_limits < int > ::max() / 4;
const double PI = acos(-1);

const int mod = 1e9 + 7;
const int p = 27;

int getHash(string s) {
  int ans = 0;
  int n = s.size();
  int base = 1;
  for (int i = 0; i < n; i++) {
    ans += (s[i]-'a'+1) * base % mod;
    ans %= ans;
    base = base * p % mod;
  }
  return ans;
}

int binPow(int b, int e) {
  if (e == 0) return 1;
  if (e == 1) return b;
  if (e%2 == 0) {
    int ans = binPow(b, e/2);
    return ans * ans % mod;
  }
  else {
    int ans = binPow(b, e-1);
    return ans * b % mod;
  }
}

struct Hash{
  vector<int> h_pref;
  vector<int> inv_mod;
  void init(string s) {
    int n = s.size();
    h_pref.resize(n);
    int base = 1;
    for (int i = 0; i < n; i++) {
      h_pref[i] = (s[i]-'a'+1) * base % mod;
      if (i > 0) h_pref[i] = (h_pref[i] + h_pref[i-1]) % mod;
      base = base * p % mod;
    }
    
    inv_mod.resize(n);
    // base = 1;
    // for (int i = 0; i < n; i++) {
    //   inv_mod[i] = binPow(base, mod-2);
    //   base = base * p % mod;
    // }
    base = binPow(p, n-1);
    inv_mod[n-1] = binPow(base, mod-2);
    for (int pot = n-2; pot >= 0; pot--) {
      inv_mod[pot] = inv_mod[pot+1] * p % mod;
    }
  }

  int getHash(int i, int j) {
    int ans = h_pref[j];
    if (i > 0) ans = (ans - h_pref[i-1] + mod) % mod;
    // ans = ans * p^-i
    // p^-i = (p^i)^{mod-2} % mod
    // int p_i = binPow(p, i);
    // p_i = binPow(p_i, mod - 2);
    ans = ans * inv_mod[i] % mod;
    return ans;
  }
};

signed main() {
  std::ios::sync_with_stdio(false); cin.tie(0);
  
  return 0;
}
// Sunrise, Parabellum
