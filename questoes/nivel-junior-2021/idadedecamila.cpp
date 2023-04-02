// Código obtido através do chatGPT

#include <iostream>
using namespace std;

int main() {
    int idades[3];
    for (int i = 0; i < 3; i++) {
        cin >> idades[i];
    }

    int idade_camila;
    for (int i = 0; i < 3; i++) {
        if (idades[i] != max(idades[0], max(idades[1], idades[2])) && idades[i] != min(idades[0], min(idades[1], idades[2]))) {
            idade_camila = idades[i];
            break;
        }
    }

    cout << idade_camila << endl;

    return 0;
}