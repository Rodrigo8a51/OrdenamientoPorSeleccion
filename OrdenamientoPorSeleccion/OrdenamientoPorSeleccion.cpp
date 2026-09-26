#include <iostream>
using namespace std;

void seleccion(int numeros[], int n) {
    int comparaciones = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            comparaciones++;

            if (numeros[j] < numeros[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int temp = numeros[i];
            numeros[i] = numeros[menor];
            numeros[menor] = temp;

            intercambios++;
        }

        cout << "Pasada " << i + 1 << ":" << endl;

        for (int j = 0; j < n; j++) {
            cout << numeros[j] << " ";
        }

        cout << endl << endl;
    }

    cout << "Comparaciones hechas: " << comparaciones << endl;
    cout << "Intercambios hechos: " << intercambios << endl;
}

int main() {
    int numeros[] = { 3, 12, 32, 8, 45, 20, 64 };
    int n = 7;

    seleccion(numeros, n);

    return 0;
}