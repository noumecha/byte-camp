#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << " entrez votre age : " << endl;
    cin >> age;
    switch (age)
    {
        case 0:
            cout << " vous n'etes pas encore née " << endl;
            break;
        case 15:
        case 16:
        case 17:
            cout << "Vous etes mineur " << endl;
            break;
        case 18:
        case 19:
        case 20:
        case 21:
            cout << "Vous etes majeur " << endl;
            break;
        default:
            cout << "Vous etes un adulte " << endl;
            break;
    }
    return 0;
}