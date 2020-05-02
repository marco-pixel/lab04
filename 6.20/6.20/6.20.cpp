

#include <iostream>
using namespace std;
float isFactor(int x, int y);
int main()
{
    int a, b;
    float c;
    cout << "ingrese primer numero: ";
    cin >> a;
    cout << "ingrese segundo numero: ";
    cin >> b; 
    isFactor(a, b);
    return 0;
}

float isFactor(int x, int y) {
    if (x % y == 0) {
        cout << "Vedad";
        return true;
    }
    else {
        cout << "Falso";
        return false;
    }
}