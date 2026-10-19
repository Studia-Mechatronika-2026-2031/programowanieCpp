#include <iostream>

using namespace std;

double wynikFunction(double n);

int main()
{
    // zadanie 3.5
    // double n;
    // cout << "Ktory wyraz ciagu chcialbys/abs wyznaczyc? " << endl;
    // cin >> n;
    // double a0 = 1, a1 = 2;
    // double wynik;
    // an = a(n-2)/a(n-1)
    //
    // if(n==0) {
    //     wynik = a0;
    // } else if (n == 1) {
    //     wynik = a1;
    // } else {
    //     wynik = wynikFunction(n);
    // }
    // wynik = wynikFunction(n);
    // cout << "Wynik to: " << wynik << endl;

    // zadanie 3.4
    char znak, prevZnak;
    int odleglosc, prevOdleglosc=2000000;
    while(znak != '*') {
        cout << "Podaj znak: ";
        cin >> znak;
        cout << "Wartosc liczbowa znaku podanego: " << (int)znak << endl;
        int odlegloscOdA = abs('a'-znak);
        int odlegloscOdPoprzedniego =
        if()
        cout << odlegloscOdA << endl;
    }

    return 0;
}

double wynikFunction(double n) {
    if(n == 0) return 1;
    if(n == 1) return 2;

    return (wynikFunction(n-2)/wynikFunction(n-1));
}
