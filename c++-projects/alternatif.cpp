#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << "Entrez votre age : " << endl;
    cin >> age;
    // alternative simple 
    if(age > 16 && age < 18) {
    cout << "Vous êtes mineur" << endl;
    }
    // alternative composée 
    if (age > 0) {
        cout << "Vous etes vivant" << endl;
    } else {
        cout << "Vous n'est pas encore né" << endl;
    }
    // alternative imbriquée : 
    if (age > 18 && age < 21) {
        cout << "Vous etes majeur " << endl;
    } else if (age > 21 && age < 50) {
        cout << "Vous etes adulte " << endl;
    } else {    
        cout << "Vous etes un vétéran " << endl;
    }
    return 0;
}