#include <iostream>
using namespace std;

int main() {
    int n, mult;

    cout << "Informe um número: "; cin >> n;
    cout << "Os 10 primeiros múltiplos de " << n << " são: ";
    for (int i = 1; i <= 10; i++) {cout << n*i << (i!=10 ? ", " : "");}
}