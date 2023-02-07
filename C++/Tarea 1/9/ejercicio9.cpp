#include <iostream>
#include <math.h>

using namespace std;

int main() {
  /*int ; /*creando variable*/
  float a, b, c, x1, x2, bnegativo, raiz, multiplicacion; /*creando variable*/
  system("color 9"); /* Cambio de color del texto de la consola*/
  cout<<"Ingrese el valor de a: \n"; /*Mostrar mensaje en pantalla*/
  cin>>a; /*Guardar valores ingresados por el usuario en una variable*/
  cout<<"Ingrese el valor de b: \n"; /*Mostrar mensaje en pantalla*/
  cin>>b; /*Guardar valores ingresados por el usuario en una variable*/
  cout<<"Ingrese el valor de b: \n"; /*Mostrar mensaje en pantalla*/
  cin>>c; /*Guardar valores ingresados por el usuario en una variable*/
  
  bnegativo = -1*b; /*Operando*/
  raiz = sqrt((b*b)-((4)*(a)*(c))); /*Operando*/
  multiplicacion = 2*a; /*Operando*/
  
  x1 = (bnegativo+raiz)/multiplicacion; /*Operando*/
  x2 = (bnegativo-raiz)/(multiplicacion); /*Operando*/
  
  system ("CLS");/*limpiar pantalla*/
  system("color F");/* Mostrar mensaje en pantalla*/
  cout << "El resultado de la formula x = (-b + sqrt(b^2-4ac)) / (2a): " << x1 << "\n";/*Mostrar resultado en pantalla*/
  cout << "El resultado de la formula x = (-b + sqrt(b^2-4ac)) / (2a): " << x2 << "\n";/*Mostrar resultado en pantalla*/
  return 0;
}
