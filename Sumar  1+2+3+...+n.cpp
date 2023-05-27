//Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n

//Bibliotecaaaaaaaaasss
#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	int n, suma= 0; //Declaraciones
	system("color 70");
	
	cout<<"\tBienvenidos al programa que calcula el valor de: 1+2+3+...+n\n";
	cout<<"\tPorfavor Ingrese el valor de 'n':\n";cout<<"\nEl valor ingresado es: ";cin>>n;
	
	// for(int i = valor inicial; i <= valor final; i = i + paso)
      
	for(int i=1;i<=n;i++){
        suma +=i; // 1+2+3+...+n
} 
	cout<<"\nLa suma es : "<<suma;
	cout<<"\n";
	cout<<"presiona cualquier tecla para salir";

	getch();
	//system("pause");	
	return 0;
}
