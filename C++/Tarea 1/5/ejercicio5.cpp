#include <iostream>
#include <math.h>

using namespace std;
struct{
	float precio, descuento, total, totaldescuento;
} producto; /*creando una estructura de datos*/

int main() {
	system("color 9"); /* Cambio de color del texto de la consola*/
	printf("Por favor ingrese el precio de su producto: \n"); /* Mostrar mensaje en pantalla*/
	cin>>producto.precio;/*guardar en campo de la estructura de datos*/
	printf("Por favor ingrese el descuento a aplicar a su producto en porcentaje: \n"); /* Mostrar mensaje en pantalla*/
	cin>>producto.descuento;/*guardar en campo de la estructura de datos*/
	producto.totaldescuento = producto.precio * (producto.descuento/100); /*operarndo*/
	producto.total = producto.precio - producto.totaldescuento; /*operarndo*/
	
	system ("CLS");/*limpiar pantalla*/
	system("color F");/* Mostrar mensaje en pantalla*/
	cout<<"El precio original del producto es: \n Q"<<producto.precio<<" \n"; /*Mostrar mensaje en pantalla*/
	cout<<"El descuento aplicado al producto es: \n Q"<<producto.totaldescuento<<" \n"; /*Mostrar mensaje en pantalla*/
	cout<<"El el precio con el descuento aplicado al producto es: \n Q"<<producto.total<<" \n"; /*Mostrar mensaje en pantalla*/
	return 0;
}
