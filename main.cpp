#include <iostream>

using namespace std;

int main() {
    cout << "Tabla de multiplicar del 4:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "4 x " << i << " = " << (4 * i) << endl;
    }

    cout << "\nTabla de multiplicar del 6:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "6 x " << i << " = " << (6 * i) << endl;
    }

    // Cálculo del factorial - Ejercicio 2
    int num;
    cout << "\nIngrese un numero para calcular su factorial: ";
    cin >> num;

    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es " << factorial << endl;

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.