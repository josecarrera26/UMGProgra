#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	system("color 9"); /* Cambio de color del texto de la consola*/
	printf("Por favor ingrese el primer numero: \n"); /* Mostrar mensaje en pantalla*/
	cin>>A;/*guardar en variable el input del usuario*/
	printf("Por favor ingrese el segundo numero: \n"); /* Mostrar mensaje en pantalla*/
	cin>>B;/*guardar en variable el input del usuario*/
	C = A /*Asignar valor de A en variable temporal*/
	A = B /*Asignar valor de B en A*/
	B = C /*Asignar valor del input de A en B utilizando como pivot la variable C*/
	cout<<"A = "<<A<<" \n"
	cout<<"B = "<<B<<" \n"
	return 0;
}
