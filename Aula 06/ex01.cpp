#include <iostream>
using namespace std;

int main() {
    
    int nums[10]; for (int i = 0; i < 10; i++) cin >> nums[i];
    int numsIntervalo[10];
    int inicio, fim, qtd =0;
    
    cout << "Intervalo" << endl;
    cout << "Início: "; cin >> inicio;
    cout << "Fim: "; cin >> fim;
    
    for (int i = 0; i < 10; i++) if (nums[i]>=inicio && nums[i]<=fim) {numsIntervalo[i] = nums[i]; qtd++;}
    
    cout << "Os números que estão no intervalo [" << inicio << "," << fim << "] são: " << endl;
    for (int i = 0; i < qtd; i++) cout << "- " << numsIntervalo[i] << endl;
    
    return 0;
}