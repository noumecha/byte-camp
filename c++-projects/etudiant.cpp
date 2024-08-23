#include <iostream>
#include <vector>
using namespace std;

class Etudiant {
    protected:
        string name;
        string prenom;
        string state;
        double moy;
        double notes[5];
    public:
        void saisie() {
            int n = 0;
            cout << "Enter your First Name : " << endl;
            cin >> name;
            cout << "Enter your Last Name: " << endl;
            cin >> prenom;
            for (int i = 0; i < 5; i++) {
                cout << " Enter mark " << i << " : " << endl;
                cin >> notes[i];
            }
        }
        void affiche() {
            cout << " First Name : " << name << endl;
            cout << " Last Name : " << prenom << endl;
            cout << " Average : " << moy << endl;
            cout << " Status : " << state << endl;
        }
        void moyenne() {
            int s = 0;
            for (int i = 0; i < 5; i++) {
                s += notes[i];
            }
            moy = s / 5;
            if (moy < 10)
                state = "refused";
            else
                state = "admitted";
        }
};

int main() {
    Etudiant e1;
    e1.saisie();
    e1.moyenne();
    e1.affiche();
    return 0;
}