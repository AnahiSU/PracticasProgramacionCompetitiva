#include <bits/stdc++.h>
#define INF 1e8
#define int long long
using namespace std;

/**
.---------------------------------------------------.
| ██████╗ ██╗████████╗     ██████╗ ██╗   ██╗██████╗ |
|██╔════╝ ██║╚══██╔══╝    ██╔════╝ ██║   ██║██╔══██╗|
|██║  ███╗██║   ██║       ██║  ███╗██║   ██║██║  ██║|
|██║   ██║██║   ██║       ██║   ██║██║   ██║██║  ██║|
|╚██████╔╝██║   ██║       ╚██████╔╝╚██████╔╝██████╔╝|
| ╚═════╝ ╚═╝   ╚═╝        ╚═════╝  ╚═════╝ ╚═════╝ |
'---------------------------------------------------'
**/
int n, k;

int dp[1125][15][1125];

// Modificar la constante para la criba
const int constante = 2000;
vector<bool> criba(constante + 1);
vector<int> primos;
vector<bool> eratostenes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (!is_prime[i])
            continue;
        for (int u = 2 * i; u <= n; u += i) {
            is_prime[u] = false;
        }
    }

    for (int i = 0; i <= n; i++) {
        if (is_prime[i])
            primos.push_back(i);
    }

    return is_prime;
}

int dpesito(int posi, int cant, int c) {
    if (cant == 0 && c == 0) {
        return 1;
    }
    if (cant == 0) {
        return 0;
    }
    if (cant < 0 || primos[posi] > n) {
        return 0;
    }

    if (dp[cant][c][posi] != -1) {
        return dp[cant][c][posi];
    }
    dp[cant][c][posi] = 0;
    if (cant - primos[posi] >= 0) {
        // si lo toma por los jajas
        dp[cant][c][posi] += dpesito(posi + 1, cant - primos[posi], c - 1);
    }
    // que pasa si no lo toma
    dp[cant][c][posi] += dpesito(posi + 1, cant, c);

    return dp[cant][c][posi];
}

signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    eratostenes(2000);
    //  cin >> t;
    while (cin >> n >> k) {
        memset(dp, -1, sizeof(dp));
        if (n == 0 && k == 0) {
            return 0;
        }
        int res = dpesito(0, n, k);
        cout << res << endl;
    }
}
