#include <iostream>
using namespace std;

int main() {
    
    int nums[11]; for (int i = 0; i < 11; i++) cin >> nums[i];
    int positions[11];
    int qtd = 0;
    
    for (int i = 0; i < 11; i++) if (nums[i] == nums[11]) {positions[i] = i; qtd++;}
    
    cout << "O número " << nums[11] << " apareceu " << qtd << " vezes, nas posições: ";
    for (int i = 0; i < qtd; i++) cout << "- " << positions[i] << endl;
    
    return 0;
}