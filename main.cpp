#include <iostream>
using namespace std;
int main() 
{
    int n, i;
    double numero, max;
    cout << "inserisci il numero di valori da inserire" << endl;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "inserisci il numero" << endl;
        cin >> numero;
        if (i == 1) {
            max = numero;
        }
        if (numero > max) {
            max = numero;
        }
    }
    cout << "il numero massimo è " << numero << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
