

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int exp, d;
    double bi, de;
    cout << "Introduce numero: ";
    cin >> bi;
    exp = 0;
    de = 0;
    while (((int)(bi / 10)) != 0)
    {
        d = (int)bi % 10;
        de = de + d * pow(2.0, exp);
        exp++;
        bi = (int)(bi / 10);
    }
    de = de + bi * pow(2.0, exp);
    cout << endl << "Decimal: " << de << endl;
    return 0;
}

