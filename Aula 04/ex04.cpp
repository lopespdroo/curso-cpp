#include <iostream>
using namespace std;

int main() {

    int i = 0, aprovados = 0;

    while (true) {

        int pt, mat;
        float red;

        cout << "Candidato " << i+1 << endl;
        cout << "Português: "; cin >> pt; cout << endl;
        if (pt < 0) break;
        cout << "Matemática: "; cin >> mat;
        cout << "Redacao: "; cin >> red;

        if (pt>=(50*0.8) && mat>=(35*0.6) && red>=7) aprovados++;
        i++;
    }

    cout << "Resultado: " << aprovados << " de " << i << "candidato(s) aprovado(s).";
}