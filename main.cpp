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

    // Serie de Fibonacci - Ejercicios 3
    int n;
    cout << "\nIngrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> n;

    long long a = 0, b = 1, temp;
    cout << "Serie de Fibonacci: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    cout << endl;

        // Verificar si un número es primo o no - Ejercicios 4
        int numPrimo;
        cout << "\nIngrese un numero para verificar si es primo: ";
        cin >> numPrimo;

        bool esPrimo = true;
        if (numPrimo <= 1) {
            esPrimo = false;
        } else {
            for (int i = 2; i * i <= numPrimo; i++) {
                if (numPrimo % i == 0) {
                    esPrimo = false;
                    break;
                }
            }
        }

        if (esPrimo) {
            cout << numPrimo << " es un numero primo." << endl;
        } else {
            cout << numPrimo << " no es un numero primo." << endl;
        }

    // Verificar si un número es par
    int numPar;
    cout << "\nIngrese un numero para verificar si es par: ";
    cin >> numPar;

    if (numPar % 2 == 0) {
        cout << numPar << " es un numero par." << endl;
    } else {
        cout << numPar << " no es un numero par." << endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.