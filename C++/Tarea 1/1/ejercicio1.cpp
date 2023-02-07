#include <iostream>
#include <math.h>

using namespace std;

main() {
	system("color 9");
	int num1, num2, total;
	char sn;
	printf("Por favor ingrese el primer numero entero a sumar \n");
	cin>>num1;
	printf("Por favor ingrese el segundo numero entero a sumar \n");
	cin>>num2;
	total = num1 + num2;
	system("color 2");
	cout<<"La suma de ambos numeros es: \n"<<total<<"\n";
	
	return 0;
}
