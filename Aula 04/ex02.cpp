#include <iostream>
using namespace std;

int main () {
    int mat, menorMat, i = 0;
    float cre, media = 0, menor = 10.0;

    while (true) {
        cout << "Informe a matrícula: "; cin >> mat;
        if (mat == 999) break;
        cout << "Informe o CRE: "; cin >> cre;

        if (cre < menor) menorMat = mat;
        media += cre;
        i++;
    }

    cout << "Matrícula do aluno com menor CRE: " << menorMat;
    cout << "CRE médio de todos os candidatos: " << media/i;
}