#include <iostream>
using namespace std;

int mcd(int, int);

int main() {
    int a, b;
    cout << "ingrese primer numero: ";
    cin >> a;
    cout << "ingrese segundo numero: ";
    cin >> b;

    cout << "mcd(" << a << ", " << b << ")= " << mcd(a, b) << endl;
    return 0;
}

int mcd(int a, int b) {
    if (a < b) return mcd(b, a);
    if (b == 0) return a;
    return mcd(b, a % b);
}