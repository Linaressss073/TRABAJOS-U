/*
Realiza un programa que lea números, hasta que el usuario decida parar; a cada uno de
estos números digitados, evaluarlo y determinar si es par o impar y según esta descripción
se debe calcular
*/
#include <stdio.h>


int main() {
    int num, numpares = 0, numimpares = 0, sumapares = 0, sumaimpares = 0, mayor = 0, menor = 0, count = 0;
  float promedio;

    printf("Ingrese numeros (ingrese 0 para salir): \n");

    do {
        printf("Numero %d: ", count+1);
        scanf("%d", &num);

        if (num != 0) {
            count++;

            if (num % 2 == 0) {
                numpares++;
                sumapares += num;
            } else {
                numimpares++;
                sumaimpares += num;
            }

            if (count == 1) {
                mayor = num;
                menor = num;
            } else {
                if (num > mayor) {
                    mayor = num;
                }
                if (num < menor) {
                    menor = num;
                }
            }
        }
    } while (num != 0);
promedio=(float)sumapares/(float)numpares;
    printf("\nResultados: \n");
    printf("Numeros pares: %d\n", numpares);
    printf("Promedio pares: %0.2f\n", numpares == 0 ? 0 : promedio);
    printf("Numeros impares: %d\n", numimpares);
    printf("Promedio impares: %d\n", numimpares == 0 ? 0 : sumaimpares/numimpares);
    printf("Numero mayor: %d\n", mayor);
    printf("Numero menor: %d\n", menor);

    return 0;
}