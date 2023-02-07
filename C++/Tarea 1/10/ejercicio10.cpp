#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int numero1, numero2, suma, resta, multiplicacion, division; /*creando variable*/
  system("color 9"); /* Cambio de color del texto de la consola*/
  cout<<"Ingrese el numero1: \n"; /*Mostrar mensaje en pantalla*/
  cin>>numero1; /*Guardar valores ingresados por el usuario en una variable*/
  cout<<"Ingrese el numero2: \n"; /*Mostrar mensaje en pantalla*/
  cin>>numero2; /*Guardar valores ingresados por el usuario en una variable*/
  
  suma = numero1 + numero2;
  resta = numero1 - numero2;
  multiplicacion = numero1 * numero2;
  division = numero1 / numero2;
  
  system ("CLS");/*limpiar pantalla*/
  system("color F");/* Mostrar mensaje en pantalla*/
  cout << "La suma de los numeros da como resultado: " << suma << "\n";/*Mostrar resultado en pantalla*/
  cout << "La diferencia entre ambos numeros es: " << resta << "\n";/*Mostrar resultado en pantalla*/
  cout << "El producto entre ambos numeros es: " << multiplicacion << "\n";/*Mostrar resultado en pantalla*/
  cout << "El cociente de la division de ambos numeros es: " << division << "\n";/*Mostrar resultado en pantalla*/
  return 0;
}
