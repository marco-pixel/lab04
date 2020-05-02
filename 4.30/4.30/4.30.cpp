

#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int limite;
    cout << "ingrese limite de la sucecion: ";
    cin >> limite;
    int i = 0;
    while (i<limite)
    {
        cout << a << "," << b << ",";
        a = a + b;
        b = a + b;
        i++;
    }
    return 0;
}

