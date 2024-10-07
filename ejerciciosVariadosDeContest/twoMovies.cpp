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
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int c;
    cin >> c;
    while (c--)
    {
        int a;
        cin >> a;
        vector<int> v(a), v2(a);
        int con1 = 0, con2 = 0, punt1 = 0, punt2 = 0;
        for (int i = 0; i < a; i++){
            cin >> v[i];
        }
        for (int i = 0; i < a; i++){
            cin >> v2[i];
        }
        for(int i = 0; i<a;i++){
            //primeras dos opciones: si cualquiera es mayor al otro, se toma
            if(v[i] > v2[i]){
                punt1+=v[i];
            }else{
                if(v2[i] > v[i]){
                    punt2+=v2[i];
                }else{
                    //empiezan los conteos de positivos y negativos que
                    //puedo tomar para luego intentar igualarlos
                    if(v[i] == 1){
                        con1++; //cuenta los positivos
                    }else{
                        if(v[i] == -1){
                            con2++; //cuenta los negativos
                        }
                    }
                }
            }
        }

        while(con1--){
            //escojo a cual añadir los positivos para maximizar
            if(punt1>punt2){
                punt2++;
            }else{
                punt1++;
            }
        }

        while(con2--){
            //escojo a cual quitar
            if(punt1 > punt2){
                punt1--;
            }else{
                punt2--;
            }
        }


        cout << min(punt1, punt2) << "\n";
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