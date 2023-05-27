/* Programa  que maneja tablas o matrices
elaborado por Jose Leonardo Cortes
Creado el dia 10 de mayo de 2023*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x,fil,col;
    float notas1 [10]= {3,2,1,4,5,4,5,4,1,2}; //INICIALIZANDO VECTOR
    float notas2 [5][3]={ {4,2,5} , {3,3,3} ,{2,5,4} ,{1,4,5}, {3,3,5}} ; //inicializando tabla
    char estudiantes [5][20]={"", "", "", "", ""}; //inicializando nombres - primer [] espacios presentes - segundo [] digitos
    
    for (int x=0; x<5; x++)
    {
        printf("\nDIGITE EL NOMBRE DEL ESTUDIANTE \n");
        scanf("%s" , &estudiantes[x]);
        
        for (int j=0; j<3; j++)
        {
            printf("\nDIGITE LAS 3 NOTAS \n");
            scanf("%f" , &notas2[x][j]);
                system("cls");
        }
    }
        for (int x=0; x<10; x++)
        {
            printf("%0.1f\t", notas1[x]);
        }
        printf( "\n");
        printf("\nESTUDIANTE\tCORTE1\tCORTE2\tCORTE3\tDEFINITIVA3 \n");
        for (int fil=0; fil<5; fil++)
        {
            printf("%s      \t", estudiantes[fil]);
            for (int col=0; col<3; col++)
            {
                printf ("%0.1f      \t", notas2[fil][col]);
            }
                printf( "\n");
        }
    system("pause");
    return 0;
}
/* CALCULAR LA DEFINITIVA DE CADA ESTUDIANTE 30% 30% 40
CALCULAR EL PROMEDIO DE CADA CORTE
MOSTRAR EL ESTUDIANTE CON LA MEJOR NOTA DEL CURSO
PARA EL SABADO
*/
