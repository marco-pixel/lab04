

#include <iostream>
using namespace std;

int intigerPower(int base, int exponent);

int main()
{
    int base, exponent;
    cout << "Ingrese Numero: ";
    cin >> base;
    cout << "ingrese Exponente: ";
    cin >> exponent;
    intigerPower(base, exponent);
    return 0;
}

int intigerPower(int base, int exponent) 
{
    int p=1;
    for (int i = 0; i < exponent; i++) {
        p = p * base;
    }
    cout << "Respuesta: " << p;
    return 0;
}