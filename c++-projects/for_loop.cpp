#include <iostream>
using namespace std;

int main () {
    int somme = 0;
    for (int i = 0; i < 10; i++) {
        somme += i;
    }
    cout << "La somme des 10 premiers entiers est : " << somme << endl;
    return 0;
}