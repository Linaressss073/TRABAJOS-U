/*
En un parqueadero de vehículos, se cobra minuto a 80 pesos, se requiere un programa
que muestre al final del día, cuanto tiempo permaneció cada vehículo (digitando hora
inicial , hora final), cuanto cancelo, cuantos vehículos entraron y lo recaudado por todos
ellos

Programa Elaborado Por Deivy Rojas

Datos: 80 por minuto

TOCA MOSTRAR HORAINICIAL , HORAFINAL, PLACA 

CARROS QUE ENTRARON Y EL PAGODETODOS LOS CARROS
*/

#include <iostream>
#include<windows.h>
using namespace std;

int main() {
	system("color 70");
    double HoraInicial, HoraFinal,CantidadVehiculos, ValorMinuto = 80, TiempoP;
    int Pago, TotalRecaudado = 0;
	char placa[7];
    bool continuar = true;
    
    
    cout<<"Bienvenido al parqueadero CENTRALISTA";
    while (continuar) {
        cout.precision(4);
        cout << "\t\nIngrese por favor su hora de llegada (EN ESTE FORMATO (00.00)) o ingrese -1 para salir: \n";
        cin >> HoraInicial;
        
        if (HoraInicial == -1) {
            continuar = false;
            break;
        }
        
        cout << "Su hora de entrada es: \n" << HoraInicial << endl;
        cout << "\n-------------------------------------\n";
       
	    cout<<"Ingrese la placa\n";
		cin >> placa[0] >> placa[1] >> placa[2] >> placa[3] >> placa[4] >> placa[5];
		
        cout.precision(4);
        cout << "\nIngrese por favor su hora de salida (EN ESTE FORMATO (00.00))\n";
        cin >> HoraFinal;
        cout << "Su hora de salida es: \n" << HoraFinal << endl;
           
        TiempoP = HoraFinal - HoraInicial;
        cout.precision(4);
        cout << "\nEstuvo parqueado: \n" << TiempoP;
        
        if (TiempoP <= 1 ){
            cout << "\nEstuvo por menos o una 1 hora";
        }
        else {
            cout << "\nEstuvo por una hora o mas";
        }
        
        TiempoP *=60.00;
        Pago=(TiempoP * ValorMinuto );
        
        cout.precision(4);
        cout << "\nEl valor a pagar es de: " << Pago << "\n";
        
        TotalRecaudado += Pago;
        cout.precision(4);
        cout << "\nTotal recaudado hasta ahora: " << TotalRecaudado << "\n";
        cout <<"\nSu placa es:"<<placa<<"\n";
        cout << "\n-------------------------------------\n";
    }
    
    cout << "Gracias por usar el PARQUEADERO" << endl;
    
    return 0;
}