#include <iostream>
using namespace std;

int main () {
    int i = 0, somme = 0;
    while(i < 10) {
        somme += i;
        i++;
    }
    cout << "La somme des 10 premiers entiers est : " << somme << endl;
    return 0;
}