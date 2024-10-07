#include <iostream>
#include <string>
using namespace std;

// Función recursiva que cuenta los píxeles negros en el resultado de la unión de dos imágenes en formato quadtree
int juntar(string &s1, string &s2, int pos1, int pos2, int n) {
    // Si llegamos al final de alguna cadena, no se debe procesar más
    if (pos1 >= s1.size() || pos2 >= s2.size()) return 0;
    
    // Si encontramos un cuadrante lleno en s1
    if (s1[pos1] == 'f') {
        pos1++;  // Avanzamos en s1
        if (s2[pos2] == 'p') pos2 += 5;  // Si en s2 hay un nodo padre, lo saltamos
        else pos2++;  // Si no, solo avanzamos en s2
        return n;  // Todo el cuadrante está lleno en s1, entonces se suma el tamaño de los píxeles
    }

    // Si encontramos un cuadrante lleno en s2
    if (s2[pos2] == 'f') {
        pos2++;  // Avanzamos en s2
        if (s1[pos1] == 'p') pos1 += 5;  // Si en s1 hay un nodo padre, lo saltamos
        else pos1++;  // Si no, solo avanzamos en s1
        return n;  // Todo el cuadrante está lleno en s2, entonces se suma el tamaño de los píxeles
    }

    // Si encontramos un cuadrante vacío en s1
    if (s1[pos1] == 'e') {
        pos1++;  // Avanzamos en s1
        if (s2[pos2] == 'p') return juntar(s1, s2, pos1, pos2, n);  // Recursivamente juntamos con el nodo de s2
        else return juntar(s1, s2, pos1, pos2 + 1, n);  // Avanzamos en s2 si es 'f' o 'e'
    }

    // Si encontramos un cuadrante vacío en s2
    if (s2[pos2] == 'e') {
        pos2++;  // Avanzamos en s2
        if (s1[pos1] == 'p') return juntar(s1, s2, pos1, pos2, n);  // Recursivamente juntamos con el nodo de s1
        else return juntar(s1, s2, pos1 + 1, pos2, n);  // Avanzamos en s1 si es 'f' o 'e'
    }

    // Si ambos son padres ('p')
    pos1++; pos2++;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += juntar(s1, s2, pos1, pos2, n / 4);  // Cada cuadrante es 1/4 del tamaño total
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;  // Número de casos de prueba

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;  // Leemos las dos representaciones quadtree

        int pos1 = 0, pos2 = 0;
        int result = juntar(s1, s2, pos1, pos2, 1024);  // Tamaño inicial de la imagen es 32x32 = 1024 píxeles

        cout << "There are " << result << " black pixels." << endl;  // Mostramos el resultado
    }

    return 0;
}
