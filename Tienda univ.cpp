//Bibliotecas

#include<iostream>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include <locale.h>
using namespace std;

int main(){

setlocale(LC_ALL,"es_MX");
system("color 70");
//Cambiar color del cosito [primera letra es fondo y la segunda el color de las legras]

int precio[5]={10000,800,3000,10000,11000};
int cantidades[100]; int ventas[100]; int codprod[100];
int costo[5]={8000,600,2500,7000,7500}; //declaraciones
char productos[5][15]={"Pollo","Huevo","Salchi","Jamon","Queso"};
float GananciaP,GananciaH,GananciaS,GananciaJ,GananciaQ;
int ganancia,ind,total,TotalV;
cout<<"\nCOSTO\tPRECIO\tPRODUCTO\tGANANCIA\n";
for(ind=0;ind<5;ind++)
{
    
    cout<<"\n"<<costo[ind]<<"\t"<<precio[ind]<<"\t"<<productos[ind]<<"\t"<<"\t"<<precio[ind]-costo[ind];
}
   int Repeticiones;

    int CantidadP=0,CantidadH=0,CantidadS=0,CantidadJ=0,CantidadQ=0;//
    
int Opcion;

cout<<"\n\nSeleccione el producto que vendio dependiendo de las opciones\t\n";
cout<<"==========================================\n";
cout<<"Digite la cantidad total de ventas en el dia\n";cin>>Repeticiones;
 
 for (int j = Repeticiones-1; j >=0; j--) {
      cout << " \nLe quedan "<<j<<" ventas: \n"<< "\n"; 
    
       
cout<<"1 es Pollo, 2 es Huevitos , 3 es Salchichas , 4 es Jamon y 5 es Queso\n";
cout<<"==========================================\n";cin>>Opcion;

switch(Opcion){


    case 1:cout<<"\t\nElegiste Pollo";
    cout<<"\nCantidad de pollo que vendiste\n";cin>>CantidadP;
    GananciaP=CantidadP*(10000-8000);break; 
   
    
    case 2:cout<<"\t\nElegiste Huevitos";
    cout<<"\nCantidad de huevos que vendiste\n";cin>>CantidadH;
    GananciaH=CantidadH*(800-600);break;
   
    
    case 3:cout<<"\t\nElegiste Salchicas";
    cout<<"\nCantidad de Salchicas que vendiste\n";cin>>CantidadS;
    GananciaS=CantidadS*(3000-2500);break;
    
    
    case 4:cout<<"\t\nElegiste Jamon";
    cout<<"\nCantidad de Jamon que vendiste\n";cin>>CantidadJ;
    GananciaJ=CantidadJ*(10000-7000);break;
    
    
    case 5:cout<<"\t\nElegiste Queso";
    cout<<"\nCantidad de Queso que vendiste\n";cin>>CantidadQ;
    GananciaQ=CantidadQ*(11000-7500);break;
}
}
double long GananciaNeta;
GananciaNeta=(GananciaP+GananciaH+GananciaS+GananciaJ+GananciaQ);
cout<<"\nLas ganancias en dinero total fue :\n";
cout.precision(10);
cout<<GananciaNeta;

return 0;
}