
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int i,n;
    double a;
    double s = 0;
    cout << "Ingrese aproximacion ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a = (-4) * (pow(-1, i) / ((2 * i) - 1));

        s = s + a;
    }
    cout << "el  valor de  pi es :" << s << endl;
    return 0;
}
//para que pi= 3.14159 deben de pasar 200000 terminos.