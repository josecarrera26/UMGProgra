#include <iostream>
#include <math.h>

using namespace std;
struct{
	float base, altura, area, perimetro;
} rectangulo; /*creando una estructura de datos*/

int main() {
	system("color 9"); /* Cambio de color del texto de la consola*/
	printf("Por favor ingrese la altura del rectangulo: \n"); /* Mostrar mensaje en pantalla*/
	cin>>rectangulo.altura;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese la base del rectangul: \n"); /* Mostrar mensaje en pantalla*/
	cin>>rectangulo.base;/*guardar en campo de la estructura de datos*/
	rectangulo.area = rectangulo.altura * rectangulo.base; /*operarndo*/
	rectangulo.perimetro = (2*rectangulo.base) + (2*rectangulo.altura); /*operarndo*/
	
	system ("CLS");/*limpiar pantalla*/
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"El area del rectangulo es: \n"<<rectangulo.area<<" \n"; /*Mostrar mensaje en pantalla*/
	cout<<"El perimetro del rectangulo es: \n"<<rectangulo.perimetro<<" \n"; /*Mostrar mensaje en pantalla*/
	return 0;
}
