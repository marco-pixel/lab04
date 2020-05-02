
#include <iostream>
#include <stdio.h>


int mcd(int m, int n);

int main() {
    
    int primero, segundo;
    int resultado;
    int N, M;

    
    printf("Ingrese el valor de M: ");
    scanf("%d", &primero);

    
    printf("Ingrese el valor de N: ");
    scanf("%d", &segundo);

    
    if (segundo > primero) {
        N = segundo;
        M = primero;
        resultado = mcd(N, M);
    }
    else { 
        M = primero;
        N = segundo;
        resultado = mcd(M, N);
    }

   
    printf("El MCM de %d y %d es: %d", primero, segundo, resultado);

    
    return 0;
}

int mcd(int m, int n) {
    if (n == 0) return m; 
    return mcd(n, m % n);   
}