#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /*creando arreglo*/
	float media; /*creando variable*/
	system("color 9"); /* Cambio de color del texto de la consola*/
	for (int i = 0; i<10; i++)
	{
		cout<<"Ingrese el numero "<< i+1 << ": \n"; /*mostrar mensaje en pantalla dependiendo del numero de iteracion*/
		cin>>myArray[i]; /*guardado datos en la coordenada del arreglo dependiendo del numero de iteracion*/
	} /*bucle para guardar informacion en el arreglo iterando en cada uno de sus espacios disponibles*/
	
	media = (myArray[0]+ myArray[1]+ myArray[2]+ myArray[3]+ myArray[4]+myArray[5]+myArray[6]+myArray[7]+myArray[8]+myArray[9])/10; /*calculando*/
	
	
	system ("CLS");/*limpiar pantalla*/
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"La media de los numeros ingresados es: "<<media; /*mostrando resultado en pantalla*/
	return 0;
}
