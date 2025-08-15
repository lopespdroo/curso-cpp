#include <iostream>
using namespace std;

int main () {

    int idade;
    string classe;

    cout << "Informe a idade do nadador: "; cin >> idade;

    if (idade>40 || idade<5) {cout << "Idade inválida."; return 0;}
    else if (idade<=7) classe = "Infantil A";
    else if (idade>=8 && idade<=10) classe = "Infantil B";
    else if (idade>=11 && idade<=13) classe = "Juvenil A";
    else if (idade>=14 && idade<=17) classe = "Juvenil B";
    else if (idade>= 18) classe = "Adulto";

    cout << "O nadador se enquadra na categoria: " << classe;
}