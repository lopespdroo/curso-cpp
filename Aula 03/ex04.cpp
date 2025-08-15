#include <iostream>
using namespace std;

int main() {

    int nCanal;

    cout << "Digite um número de canal de TV: "; cin >> nCanal;

    switch (nCanal) {
        case 5: {cout << "TV Pajuçara"; break;}
        case 7: {cout << "TV Gazeta"; break;}
        case 11: {cout << "TV Pajuçara"; break;}
        case 16: {cout << "TV Farol"; break;}
        default: {cout << "Canal inválido.";}
    }
}