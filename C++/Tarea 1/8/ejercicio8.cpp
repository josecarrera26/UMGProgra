#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double celsius, fahrenheit; /*creando variable*/
  system("color 9"); /* Cambio de color del texto de la consola*/
  cout<<"Ingrese la temperatura a convertir de Celsius a Fahrenheit: \n"; /*Mostrar mensaje en pantalla*/
  cin>>celsius; /*Guardar valores ingresados por el usuario en una variable*/
  fahrenheit = (celsius * 9/5) + 32; /*Operando*/
  
  system ("CLS");/*limpiar pantalla*/
  system("color F");/* Mostrar mensaje en pantalla*/
  cout << celsius << "°C es equivalente a " << fahrenheit << "°F.";/*Mostrar resultado en pantalla*/
  return 0;
}
