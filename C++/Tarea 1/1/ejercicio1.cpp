#include <iostream>
#include <math.h>

using namespace std;

main() {
	system("color 9");/* Cambio de color del texto de la consola*/
	int num1, num2, total;
	char sn;
	printf("Por favor ingrese el primer numero entero a sumar: \n");/* Mostrar mensaje en pantalla*/
	cin>>num1;/*guardar en variable el input del usuario*/
	printf("Por favor ingrese el segundo numero entero a sumar: \n");/* Mostrar mensaje en pantalla*/
	cin>>num2;/*guardar en variable el input del usuario*/
	total = num1 + num2;/*guardar en variable y operar*/
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"La suma de ambos numeros es: \n"<<total<<"\n";/* Mostrar mensaje en pantalla*/
	
	return 0;
}
