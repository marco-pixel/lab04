

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Ingrese tamaño de lado: ";
    cin >> size;
    for (int i = 0; i < (size); i++)
    {
        if (i < size - 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*\n";
        }
    }
    for (int o = 0; o < size - 2; o++)
    {
        cout << "*";
        for (int z = 0; z < (size - 2); z++)
        {
            cout << " ";
        }
        cout << "*\n";
    }
    if (size - 2 >= 0)
    {
        for (int x = 0; x < (size); x++)
        {
            cout << "*";
        }
    }
    return 0;
}

