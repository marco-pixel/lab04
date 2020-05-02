

#include <iostream>
using namespace std;
int tiempo(int d, int h, int m);
int main()
{
    int d, h, m,a,b,c;
    cout << "dias: ";
    cin >> d;
    cout << "horas: ";
    cin >> h;
    cout << "minutos: ";
    cin >> m;
    tiempo(d, h, m);
    cout << "dias: ";
    cin >> a;
    cout << "horas: ";
    cin >> b;
    cout << "minutos: ";
    cin >> c;
    tiempo(a, b, c);
    return 0;
}

int tiempo(int d, int h, int m) {
    int minutos;
    minutos = (d * 24 * 60) + (h * 60) + m;
    cout << minutos;
    return 0;
}