#include <iostream>

using namespace std;
struct{
	string pnombre;
	string snombre;
	string papellido;
	string sapellido;
	string genero;
	string ecivil;
	int edad;
} persona; /*creando una estructura de datos*/

int main() {
	system("color 9"); /* Cambio de color del texto de la consola*/
	printf("Por favor ingrese el primer nombre de la persona: \n"); /* Mostrar mensaje en pantalla*/
	cin>>persona.pnombre;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el segundo nombre de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.snombre;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el primer apellido de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.papellido;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el segundo apellido de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.sapellido;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese la edad de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.edad;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el genero de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.genero;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el estado civil de la persona: \n");/* Mostrar mensaje en pantalla*/
	cin>>persona.ecivil;/*guardar en campo de la estructura de datos*/
	
	system ("CLS");/*limpiar pantalla*/
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"El nombre completo de la persona es: \n";/* Mostrar mensaje en pantalla*/
	cout<< persona.pnombre<<" "<<persona.snombre<<" "<<persona.papellido<<" "<<persona.sapellido<<" \n";/*consultar datos guardados en el campo y concatenarlos*/
	cout<<"La edad de la persona es: \n";/* Mostrar mensaje en pantalla*/
	cout<<persona.edad<<" \n";/*consultar datos guardados en el campo*/
	cout<<"El genero de la persona es: \n";/* Mostrar mensaje en pantalla*/
	cout<<persona.genero<<" \n";/*consultar datos guardados en el campo*/
	cout<<"El estado civil de la persona es: \n";/* Mostrar mensaje en pantalla*/
	cout<<persona.ecivil;/*consultar datos guardados en el campo*/
	return 0;
}
