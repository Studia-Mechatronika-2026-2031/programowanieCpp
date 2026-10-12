#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14;

int main()
{
    // Zadadnie 2.1
    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Witaj " << imie << "!" << endl << endl;

    // Zadanie 2.2
    int a, b;
    double c;
    cout << "Podaj trzy liczby: [int] [int] [double]" << endl;
    cin >> a >> b >> c;
    double d = a + b + c;
    cout << "Suma: " << d << endl << endl;

    // Zadanie 2.3
    double r, kat;
    cout << "Podaj promien kola: ";
    cin >> r;
    cout << "Podaj kat luku, ktorego dlugosc chcesz obliczyc: ";
    cin >> kat;
    double pole = PI * r * r;
    double obwod = 2 * PI * r;
    double dlugoscLuku = (kat/360) * 2 * PI * r;
    cout << "Pole kola wynosi: " << pole << endl;
    cout << "Obwod kola wynosi: " << obwod << endl;
    cout << "Dlugosc luku dla podanego kola wynosi: "
         << dlugoscLuku << endl << endl;

    // Zadanie 2.5
    int wybranaLiczba;
    cout << "Podaj losowa liczbe: ";
    cin >> wybranaLiczba;
    if(wybranaLiczba > 0) {
        cout << "Podana liczba jest dodatnia" << endl;
    } else if (wybranaLiczba < 0) {
        cout << "Podana liczba jest ujemna" << endl;
    } else {
        cout << "Podana liczba jest równa zeru" << endl;
    }
    cout << endl;

    // Zadanie 3.1
    float ilePoprawnych = 0, ileWszystkich = 3;
    char urzytkownikaOdpowiedz;
    cout << "TEST SIE ROZPOCZOL" << endl;
    cout << "Pytanie 1:" << endl;
    cout << "[A]    [B]" << endl;
    cin >> urzytkownikaOdpowiedz;
    if(urzytkownikaOdpowiedz == 'A'){
        ilePoprawnych++;
        cout << "Pytanie 2:" << endl;
        cout << "[A]    [B]" << endl;
        cin >> urzytkownikaOdpowiedz;
        if(urzytkownikaOdpowiedz == 'A'){
            ilePoprawnych++;
            cout << "Pytanie 3:" << endl;
            cout << "[A]    [B]" << endl;
            cin >> urzytkownikaOdpowiedz;
            if(urzytkownikaOdpowiedz == 'A'){
                ilePoprawnych++;
                cout << "Brawo !!! Egzamin ukonczony z dokladnosciom 100%" << endl;
            } else {
                cout << "Twoj wynik to: "
                     << ilePoprawnych/ileWszystkich << endl;
            }
        } else {
            cout << "Twoj wynik to: "
                 << ilePoprawnych/ileWszystkich << endl;
        }
    } else {
        cout << "Twoj wynik to: "
             << ilePoprawnych/ileWszystkich << endl;
    }


    return 0;
}
