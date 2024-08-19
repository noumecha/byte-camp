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
class Rectangle {
    private:
        double lon;
        double lar;
    public:
        Rectangle() {
            cout << "Constructor called" << endl;
        };
        double perim() {
            return (lon+lar)*2;
        };
        double surf() {
            return lon * lar;
        };
        void setLon(double x) {
            lon = x;
        };
        void setLar(double y) {
            lar = y;
        };
        double getLon() {
            return lon;
        };
        double getLar() {
            return lar;
        };
};
int main() {
    Voiture v;
    v.name = "Ferrari";
    cout << "Voiture 1 name : " << v.name << endl;
    Rectangle r;
    r.setLon(4);
    r.setLar(5);
    cout << "Perimètre du rectangle : " << r.perim() << " cm" << endl;
    cout << "Aire du rectangle : " << r.surf() << " cm2" << endl;
    return 0;
}