#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
   
   vector<char> nums = {'1', '4', '9', '2', '3', '5', '7'};

   int k;
   cin >> k;
   string s;
   cin >> s;
   int ans = 0;
   for (char c : s) {
      for (char ch : nums) {
         if (ch == c) {
            ans++;
            break;
         }
      }
   }
   cout << ans << '\n';

  return 0;
}

