/* Programa  que maneja tablas o matrices
elaborado por Jose Leonardo Cortes
Creado el dia 10 de mayo de 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
	float fil, col, j;
    float notas1[10] = {0};
    float notas2[5][3] = {0};
    char estudiantes[5][20] = {""};
    float definitiva[5] = {0};
    float promcorte[3] = {0};

    for (int x = 0; x < 2; x++) {
        printf("\nDIGITE EL NOMBRE DEL ESTUDIANTE: ");
        scanf("%s", estudiantes[x]);

        for (int j = 0; j < 3; j++) {
            printf("DIGITE LAS 3 NOTAS: ");
            scanf("%f", &notas2[x][j]);
            printf("\n\n\n\n");
        }
    }

    for (int x = 0; x < 5; x++) {
        printf("%0.1f\t", notas1[x]);
    }

    for (int d = 0; d < 5; d++) {
        definitiva[d] = notas2[d][0] * 0.3 + notas2[d][1] * 0.3 + notas2[d][2] * 0.4;
    }

    printf("\n");
    printf("\nESTUDIANTE\tCORTE1\tCORTE2\tCORTE3\tDEFINITIVA\n");
    
	for (int fil = 0; fil < 5; fil++) 
	{
        printf("%s\t\t", estudiantes[fil]);
    
	for (int col = 0; col < 3; col++) 
		{
            printf("%0.1f\t", notas2[fil][col]);
        }
        	printf("%0.1f\n", definitiva[fil]);
    }

    system("pause");
    return 0;
}
/* CALCULAR LA DEFINITIVA DE CADA ESTUDIANTE 30% 30% 40
CALCULAR EL PROMEDIO DE CADA CORTE
MOSTRAR EL ESTUDIANTE CON LA MEJOR NOTA DEL CURSO
PARA EL SABADO
*/
