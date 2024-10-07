#include <bits/stdc++.h>
#include <queue>

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

bool esValida(int x, int y) { return x >= 0 && x <= 7 && y >= 0 && y <= 7; }
void solve() {
    string ini, fin;
    while (cin >> ini >> fin) {
        pair<int, int> init = {ini[1] - '1', ini[0] - 'a'};
        pair<int, int> finit = {fin[1] - '1', fin[0] - 'a'};
        vector<vector<int>> tab(8, vector<int>(8));
        if (init == finit) {
            cout << "To get from " << ini << " to " << fin
                 << " takes 0 knight moves." << endl;
            continue;
        }
        queue<pair<pair<int, int>, int>> cola;

        cola.push({init, 0});

        int cont = 0;
        while (!cola.empty()) {
            pair<pair<int, int>, int> aux = cola.front();
            cola.pop();
            int x = aux.first.first;
            int y = aux.first.second;
            if (x == finit.first && y == finit.second) {
                cont = aux.second;
                break;
            }

            if (esValida(x - 2, y - 1)) {
                cola.push({{x - 2, y - 1}, aux.second + 1});
            }
            if (esValida(x - 1, y - 2)) {
                cola.push({{x - 1, y - 2}, aux.second + 1});
            }
            if (esValida(x - 2, y + 1)) {
                cola.push({{x - 2, y + 1}, aux.second + 1});
            }
            if (esValida(x - 1, y + 2)) {
                cola.push({{x - 1, y + 2}, aux.second + 1});
            }
            if (esValida(x + 1, y + 2)) {
                cola.push({{x + 1, y + 2}, aux.second + 1});
            }
            if (esValida(x + 2, y + 1)) {
                cola.push({{x + 2, y + 1}, aux.second + 1});
            }
            if (esValida(x + 2, y - 1)) {
                cola.push({{x + 2, y - 1}, aux.second + 1});
            }
            if (esValida(x + 1, y - 2)) {
                cola.push({{x + 1, y - 2}, aux.second + 1});
            }
        }
        cout << "To get from " << ini << " to " << fin << " takes " << cont
             << " night moves." << endl;
    }
}

signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}