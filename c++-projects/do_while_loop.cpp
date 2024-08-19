#include <iostream>
using namespace std;

int main() {
    int i = 0, somme = 0;
    do {
        somme += i;
        i++;
    } while(i < 10);
    cout << "La somme des 10 premiers entiers est : " << somme << endl;
    return 0;
}