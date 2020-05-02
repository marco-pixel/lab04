

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "ingrese primer numero: ";
    cin >> a;
    int minimo = a;
    for (int i = 0; i < a-1; i++) 
    {
        cout << "ingrese otro numero: ";
        cin >> b;
        if (minimo > b) {
            minimo = b;
        }
    }
    cout << "el menor numero es: " << minimo;
    return 0;
}


