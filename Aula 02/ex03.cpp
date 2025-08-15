#include <iostream>
using namespace std;

int main () {

    string nome;
    float peso, altura, imc;

    cout << "Nome: "; cin >> nome;
    cout << "Peso (kg): "; cin >> peso;
    cout << "Altura: "; cin >> altura;

    imc = (peso/(altura*altura));

    cout << nome << ", seu imc é " << imc << " - " << (imc >=18.5 && imc <=24.9 ? "Peso normal" : "Fora da faixa");
}