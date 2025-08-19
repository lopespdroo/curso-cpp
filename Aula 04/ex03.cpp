#include <iostream>
using namespace std;

int main() {

    int qtd = 0;
    
    for (int i = 0; i < 5; i++) {
        float precoSdesconto, precoCdesconto;
        cout << "Produto " << i+1 << "(preço SEM desconto):"; cin >> precoSdesconto;
        cout << "Produto " << i+1 << "(preço COM desconto):"; cin >> precoCdesconto;

        if (precoCdesconto <= ((precoSdesconto)-precoSdesconto*0.2)) qtd++;
    }

    cout << "No total, " << qtd << " produtos tiveram um desconto de pelo menos 20%.";
}