
#include <iostream>
#include <stdio.h>
using namespace std;
int voltear(int x);

int main() {

    int n;
    cout << "ingrese numero: ";
    cin >> n;
    voltear(n);
    
    return 0;
}
int voltear(int x) {
    while (x >= 10) {
        printf("%d", x % 10);
        x /= 10;
    }
    printf("%d", x);
    printf("\n\n\n"); system("pause");
    return 0;
}
