#include <iostream>
using namespace std;

int main() {

    string nome;
    int idade;
    float peso;
    char gen;

    cout << "Nome: "; cin >> nome;
    cout << "Idade: "; cin >> idade;
    cout << "Peso (kg): "; cin >> peso;
    cout << "Gênero (M ou F): "; cin >> gen;

    cout << "Cadastro realizado com sucesso!\n";
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Peso (kg): " << peso << endl;
    cout << "Gênero: " << gen << endl;

    return 0;
}