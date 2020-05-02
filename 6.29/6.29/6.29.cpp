

#include <iostream>
using namespace std;
int primo(int x,int y);
int main()
{
    int a, b;
    cout << "Inicio: ";
    cin >> a;
    cout << "Final: ";
    cin >> b;
    primo(a, b);
    return 0;
}


int primo(int x, int y) {
    for (int i = x; i < y; i++) {
        int divisor = 1, divisores = 0, num = 0;
        do {
            if (i % divisor == 0) {
                divisores++;
            }
            divisor++;
        } while (divisor <= i);
        if (divisores == 2) {
            cout << "n-> El numero " << i << " es PRIMO.\n";
        }
        else {
            cout << "n-> El numero " << i << " NO es PRIMO.\n";
        }
    }
    return 0;
}
