#include <iostream>
#include <math.h>

using namespace std;

int main() {
	system("color 9");
	int num1;
	float raiz;
	printf("Por favor ingrese el numero entero calcular su raiz \n");
	cin>>num1;
	raiz = sqrt(num1);
	system("color 2");
	cout<<"La raiz del numeros es: \n"<<raiz;
	return 0;
}
