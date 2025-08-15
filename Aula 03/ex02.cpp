#include <iostream>
using namespace std;

int main () {
    
    int anonascimento, anoatual, idade;

    cout << "Ano de nascimento: "; cin >> anonascimento;
    cout << "Ano atual: "; cin >> anoatual;

    idade = anoatual - anonascimento;

    if (idade>=18) cout << "Com " << idade << "anos você está apto para dirigir";
    else cout << "Com " << idade << "anos você não está apto para dirigir";
}