/*
Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe 
entregar la suma de los valores mayores a 0 introducidos.

*/

//Bibliotecas
using namespace std;

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main(){
	
	int numero, suma = 0;
	
do{
	cout<<"\n\tDigite un numero: ";cin>>numero;
	
	if(numero>0){
		suma += numero;
	}
}while ((numero<20) || (numero>30 ) &&(numero !=0));

cout<<"\nLa suma es: "<<suma<<endl;
return 0;
}
