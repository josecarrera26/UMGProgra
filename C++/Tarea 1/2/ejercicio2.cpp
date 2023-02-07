#include <iostream>
#include <math.h>

using namespace std;

int main() {
	system("color 9");
	int num1;
	float raiz;
	printf("Por favor ingrese el numero entero calcular su raiz: \n"); /* Mostrar mensaje en pantalla*/
	cin>>num1;/*guardar en variable el input del usuario*/
	raiz = sqrt(num1);/*guardar en variable y operar*/
	
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"La raiz del numeros es: \n"<<raiz;/* Mostrar mensaje en pantalla*/
	return 0;
}
