#include <iostream>
using namespace std;

int main () {

    string nome;
    float nota1, nota2, nota3, media;

    cout << "Nome: "; cin >> nome;
    cout << "Nota 1: "; cin >> nota1;
    cout << "Nota 2: "; cin >> nota2;
    cout << "Nota 3: "; cin >> nota3;

    media = (nota1+nota2+nota3)/3;

    cout << "A média final de " << nome << " foi " << media << ".";

    return 0;
}