/*Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos,utilizando la función pow.*/

using namespace std;

//bibliotecas

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main(){

system("color 70"); //Color en pantalla

float x,y;          //Declaraciones
float resultado;    //Declaraciones

cout<<"\n\tDigite la variable de X ";cin>>x;  //Imprimir X y guardar en "x"
cout<<"\n\tDigite la variable de Y ";cin>>y;  //Imprimir Y y guardar en "y" 

resultado = pow(x,y); //Hacer operacion y guardar resultado

cout.precision(4);
cout<<"\n\tEl resultado es :"<<resultado<<endl; //Imprimir resultado

return 0;
}