#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

long long ans = -INF;

bool is_prime(int n) {
   if (n == 1) return 0;
   for (int64_t i = 2; i * i <= n; i++) {
      if (n % i == 0) {
         return 0;
      }
   }
   return 1;
}

long long solve(string s, long long tot) {
   ans = max(ans, tot);
   if (!s.size()) {
      return 0LL;
   }
   int n = s.size();
   long long val = stoll(s);
   if (is_prime(val)) {
      tot++;
      for (int i = 0; i < n; i++) {
         string s1, s2;
         s1 = s.substr(0, i);
         s2 = s.substr(i + 1);
         s1.append(s2);
         if (s1.size()) {
            solve(to_string(stoll(s1)), tot);
         } else {
            ans = max(ans, tot);
         }
      }
   } else {
      return 0LL;
   }
   return 0LL;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

   string s;
   cin >> s;
   solve(s, 0);
   cout << ans << '\n';

  return 0;
}

