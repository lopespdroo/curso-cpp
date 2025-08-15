#include <iostream>
using namespace std;

int main() {

    int n1, n2;

    cout << "Informe o primeiro valor inteiro: "; cin >> n1;
    cout << "Informe o segundo valor inteiro: "; cin >> n2;

    if (n1>n2) cout << "O primeiro número digitado (" << n1 << ") é maior."; 
    else cout << "O segundo número digitado (" << n2 << ") é maior.";

    return 0;
}