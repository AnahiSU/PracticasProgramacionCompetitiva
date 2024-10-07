/*
-Si todos aceptaran el primer "no", el mundo sería un gran silencio.
- El trabajo duro supera al talento cuando el talento no trabaja duro.
- Los desafios son los que hacen la vida interesante y superarlos es
lo que hace a la vida significativa.
- Para sentirse vivo se necesita una meta en la que trabajar.
*/

typedef long long ll;
#define srt(a) sort(a.begin(), a.end());

#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n, f, k;
        cin >> n >> f >> k;
        vector<int> cubeta(101);
        vector<int> arr(n);

        for(int i = 0;i<n; i++)
        {
            cin >> arr[i];
            cubeta[arr[i]]++;
        }

        int buscado = arr[f - 1];
        if (k == n)
        {
            cout << "YES" << endl;
            return ;
        }
        srt(arr);
        reverse(arr.begin(),arr.end());
        if (buscado < arr[k])
        {
            cout << "NO" << endl;
        }
        else if (buscado > arr[k])
        {
            cout << "YES" << endl;
        }
        else
        {
            // si es igual
            int c = 0;
            for (int i = k; i < n; i++)
            {
                if (buscado == arr[i])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if (c != cubeta[buscado])
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    
}
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int c;
    cin >> c;
    while (c--)
    {
        solve();

        }

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