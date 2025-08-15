#include <iostream>
using namespace std;

int main() {

    int idade, qtd = 0;
    float altura;

    cout << "Informe a sua altura (cm): "; cin >> altura;
    cout << "Informe a sua idade: "; cin >> idade;

    cout << "Você pode andar nos brinquedos: ";
    if (altura>=150 && idade>=12) {cout << "- Barca Viking"; qtd++;}
    if (altura>=140 && idade>=14) {cout << "- Elevator of Death"; qtd++;}
    if (altura>=170 && idade>=16) {cout << "- Final Killer"; qtd++;}

    cout << "Um total de " << qtd << " de 3 brinquedos.";
}