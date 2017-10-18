#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    cout << "Introduceti v1 : ";
    cin >> v1;
    cout << "Introduceti v2 : ";
    cin >> v2;
    if(v1 < v2)
        cout << "Ordine crescatoare" << endl;
    else
        cout << "Ordine descrescatoare" << endl;
    return 0;
}
