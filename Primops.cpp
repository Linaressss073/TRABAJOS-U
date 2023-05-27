/*
Realizar un programa que muestre los NUMEROS PRIMOS que hay entre 1 y un número X, dado por el usuario.

Programa realizado por Deivy Rojas y Santiago Pedraza
*/

#include <stdio.h>

int num_primo(int numero) {
    int i;
    if(numero < 2) return 0;
    for(i=2; i<=numero/2; i++) {
        if(numero%i == 0) return 0;
    }
    return 1;
}

int main() {
    int x, i;
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    printf("\nLos numeros primos entre 1 y %d son:\n", x);
    for(i=1; i<=x; i++) {
        if(num_primo(i)) printf("%d\n", i);
    }
    return 0;
}
