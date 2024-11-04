#include <iostream>
#include <string>
using namespace std;
class Osoba {
private:
    string imie; // Pole prywatne na imię
    int wiek; // Pole prywatne na wiek

public:
    // Getter dla imienia
    string getImie() const {
        return imie;
    }

    // Setter dla imienia
    void setImie(const string& noweImie) {
        imie = noweImie;
    }

    // Getter dla wieku
    int getWiek() const {
        return wiek;
    }

    // Setter dla wieku
    void setWiek(int nowyWiek) {
        if (nowyWiek >= 0) { // Prosta walidacja wieku
            wiek = nowyWiek;
        } else {
            cout << "Wiek nie może być ujemny!" << endl;
        }
    }
};

int main() {
    Osoba osoba;

    // Ustawiamy imię i wiek
    osoba.setImie("Jan");
    osoba.setWiek(25);

    // Wyświetlamy dane
    cout << "Imię: " << osoba.getImie() << endl;
    cout << "Wiek: " << osoba.getWiek() << endl;

    return 0;
} 