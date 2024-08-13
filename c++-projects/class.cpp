#include <iostream>
using namespace std;

class Voiture {
    public:
        string name;
        string immat;
    public:
        Voiture() {
            cout << "Constructor called" << endl;
        }
};
int main() {
    Voiture v;
    v.name = "Ferrari";
    cout << "Voiture 1 name : " << v.name << endl;

    return 0;
}