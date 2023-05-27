
/* 
Programa  que maneja tablas o matrices
elaborado por 

Jose Leonardo Cortes
Santiago Pedraza
Deivy Rojas 
Michael Caro
Camilo Enciso

Creado el dia 10 de mayo de 2023
*/

/*
					Bibliotecas
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {
	system("color 02");
	///////////////////////////// 
	float p;
	float d;
	float mayor=0;
    float notas1[10] = {0};
    float notas2[5][3] = {0};           // DECLARACIONES
    string estudiantes[5] = {"    "};
    float definitiva[5] = {0};
    float promedio[3]={0};
	
	//////////////////////////////
	
		/*/////////////////////////////
		Asignacion de datos + pedir
		/////////////////////////////*/
    for (int x = 0; x < 5; x++) {
        cout << "\n\4DIGITE EL NOMBRE DEL ESTUDIANTE: ";
        cin >> estudiantes[x];
        
        for (int j = 0; j < 3; j++) {
            cout << "\4DIGITE LAS 3 NOTAS: ";
            cin >> notas2[x][j];
            cout << "\n------------\n";
        }
    }
    
		/*/////////////////////////////
				Ciclos repetitivos
		/////////////////////////////*/
    for (int x = 0; x < 5; x++) {
        cout << notas1[x] << "\t";
    }
    for (int d = 0; d < 5; d++) {
        definitiva[d] = notas2[d][0] * 0.3 + notas2[d][1] * 0.3 + notas2[d][2] * 0.4;
    }
    for (int p = 0; p < 3; p++){
    	promedio[p] = definitiva[0] + definitiva[1] + definitiva[2] + definitiva[3] + definitiva[4];
	}
	
		/*////////////////////////////////////
		Coroto para hacer el menor y mayor
		///////////////////////////////////*/
	
	float menorr = definitiva[0];
	float mayorr = definitiva[0];
		
	 for(int i = 1; i < 5; i++){
        if(definitiva[i] < menorr){
            menorr = definitiva[i];
        }
        if(definitiva[i] > mayorr){
            mayorr = definitiva[i];
        }
    }

	/*////////////////////////////////////
			Imprimir tabla y resultados
	///////////////////////////////////*/
    cout << endl;
    
    
    cout <<"============================================================\n";
    cout << "ESTUDIANTES\t\tCORTE1\tCORTE2\tCORTE3\tDEFINITIVA\n";
    
    for (int fil = 0; fil < 5; fil++) 
    {
        cout << estudiantes[fil] << "\t\t";
        
        for (int col = 0; col < 3; col++) 
        {
            cout << notas2[fil][col] << "\t";
        }
        cout << definitiva[fil] << endl;
	}
	cout << "\nEl promedio del corte del curso es:  \t" <<promedio[0]/5<<endl;
	
	cout << "\nLa mayor nota definitiva es: "<<mayorr<<endl;
	cout << "\nLa menor nota definitiva es: "<<menorr<<endl;
	
    getch();
    return 0;
}
