

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "ingrese numeros: ";
    cin >> a >> b >> c >> d >> e;
    if (a == e)
    {
        if (b == d)
        {
            cout << "es un palindromo";
        }
        else
        {
            cout << "no es un palindromo";
        }
    }
    else
    {
        cout << "no es un palindromo";
    }
    return 0;
}

