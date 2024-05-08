#include <iostream>
using namespace std;

int main() {
    int n;
    bool esPrimo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo)
        cout << n << " es un numero primo." << endl;
    else
        cout << n << " no es un numero primo." << endl;

    return 0;
}
