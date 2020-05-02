
#include <iostream>
 
using namespace std;
int fibo(int limite);
int main() {
    int l;
    cout << "ingrese limite: ";
    cin >> l;
    fibo(l);
    return 0;
}
int fibo(int limite) {
    int a=0, b=1, p;
    for (int i = 0; i < limite; i++) {
        cout << b<<",";
        p = b;
        b += a;
        a = p;
    }

    return 0;
}