#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int min = -7;
    int max = 10;
    int minAbs = 200000;
    int currMin, prevMin = 1000, index1, index2, diff;

    srand(time(0));

    int tablica[10];

    cout << "[ ";
    for(int i=0; i<10; i++) {
        tablica[i] = (max-min+1)*(rand()/(double)RAND_MAX)+min ;
        cout << tablica[i] << " ";
    }
    cout << " ]" << endl;

    for(int i=0; i<9; i++) {
        for(int j=i+1; j<10; j++) {
            diff = tablica[i] - tablica[j];
            currMin = abs(diff);

            if(currMin < prevMin) {
                prevMin = currMin;
                index1 = i;
                index2 = j;
            }
        }
    }

    cout << "Index liczby 1: " << index1 << " Jest to liczba: "<< tablica[index1] << endl;
    cout << "Index liczby 2: " << index2 << " Jest to liczba: "<< tablica[index2] << endl;

    int temp1 = tablica[index1];
    int temp2 = tablica[index2];
    tablica[index2] = temp1;
    tablica[index1] = temp2;

    cout << "[ ";
    for(int i=0; i<10; i++) {
        cout << tablica[i] << " ";
    }
    cout << " ]";
    cout << endl << endl;





    // zadanie 4.1
    int tablica2[10];
    min = 0;
    max = 10;
    cout << "[ ";
    for(int i=0; i<10; i++) {
        tablica2[i] = (max-min+1)*(rand()/(double)RAND_MAX)+min ;
        cout << tablica2[i] << " ";
    }
    cout << " ]" << endl;

    int tempShift = tablica2[0];
    for(int i=1; i<10; i++) {
        tablica2[i-1] = tablica2[i];
    }
    tablica2[9] = tempShift;

    cout << "[ ";
    for(int i=0; i<10; i++) {
        cout << tablica2[i] << " ";
    }
    cout << " ]";
    cout << endl;

    int liczbaPrzesuniec = 10;
    cout << "wpisz o ile chcesz przesunac tablice2: ";
    // cin >> liczbaPrzesuniec;
    for(int i=0; i<(liczbaPrzesuniec%11); i++) {
        int tempShift = tablica2[0];
        for(int i=1; i<10; i++) {
            tablica2[i-1] = tablica2[i];
        }
        tablica2[9] = tempShift;

        cout << "[ ";
        for(int i=0; i<10; i++) {
            cout << tablica2[i] << " ";
        }
        cout << " ]";
        cout << endl;
    }
    cout << endl << endl;

    const int A = 10;
    const int B = -10;
    const int P = 3;
    const int N = 10;
    int tablica2D[N][N];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            int randomNumber = (A - B + 1)*(rand()/(double)RAND_MAX) + A;
            if(randomNumber % P){
                tablica2D[i][j] = randomNumber;
            }else {
                j--;
            }
        }
    }


    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << tablica2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i<j)
                cout << tablica2D[i][j] << " ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
