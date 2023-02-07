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
} persona;

int main() {
	system("color 9");
	printf("Por favor ingrese el primer nombre de la persona: \n");
	cin>>persona.pnombre;
	printf("Por favor ingrese el segundo nombre de la persona: \n");
	cin>>persona.snombre;
	printf("Por favor ingrese el primer apellido de la persona: \n");
	cin>>persona.papellido;
	printf("Por favor ingrese el segundo apellido de la persona: \n");
	cin>>persona.sapellido;
	printf("Por favor ingrese la edad de la persona: \n");
	cin>>persona.edad;
	printf("Por favor ingrese el genero de la persona: \n");
	cin>>persona.genero;
	printf("Por favor ingrese el estado civil de la persona: \n");
	cin>>persona.ecivil;
	system ("CLS");
	system("color F");
	cout<<"El nombre completo de la persona es: \n";
	cout<< persona.pnombre<<" "<<persona.snombre<<" "<<persona.papellido<<" "<<persona.sapellido<<" \n";
	cout<<"La edad de la persona es: \n";
	cout<<persona.edad<<" \n";
	cout<<"El genero de la persona es: \n";
	cout<<persona.genero<<" \n";
	cout<<"El estado civil de la persona es: \n";
	cout<<persona.ecivil;
	return 0;
}
