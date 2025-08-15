#include <iostream>
using namespace std;

int main() {

    float valor, avista, parcelado, comissaovista, comissaoparcelado;

    cout << "Valor do produto: "; cin >> valor;
    
    avista = (valor)-(valor*0.05);
    parcelado = ((valor+(valor*0.1))/5);

    cout << "À vista: R$ " << avista;
    cout << "Parcelado (5x): R$ " << parcelado << endl;
    cout << "Comissão à vista: R$ " << avista*0.06 << endl;
    cout << "Comissão parcelado: R$ " << (valor*0.06) << endl;
    
    return 0;
}