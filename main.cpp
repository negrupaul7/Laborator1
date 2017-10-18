#include <iostream>

using namespace std;

int main()
{
    int cantitate, pret, valoare;
    cout << "Pretul inainte de citire : " << pret << endl;
    cout << "Cantitatea : ";
    cin >> cantitate;
    cout << "Pretul : ";
    cin >> pret;
    valoare=cantitate+pret;
    cout << "Valoarea : " << valoare << endl;
    return 0;
}
