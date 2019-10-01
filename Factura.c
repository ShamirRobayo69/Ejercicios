#include<stdio.h>

void main()
{
	int cedula;
	float cantP1,cantP2,precioP1,precioP2,subtotal=0,iva,total=0,PreciodeventaP1,PreciodeventaP2;
	char nombre[10],desP1[10],desP2[10];
	printf("Ingrese el Nombre del Cliente:");
	scanf("%s",&nombre);
	printf("Ingrese el N° de Cedula:");
	scanf("%i",&cedula);
	printf("Descripcion del producto N°1\n");
	printf("Ingrese el Producto:");
	scanf("%s",&desP1);
	printf("Ingrese la cantidad del producto:");
	scanf("%f",&cantP1);
	printf("Ingrese el precio:");
	scanf("%f",precioP1);
	printf("Descripcion del producto N°2\n");
	printf("Ingrese el Producto:");
	scanf("%s",&desP2);
	printf("Ingrese la cantidad del producto:");
	scanf("%f",&cantP2);
	printf("Ingrese el precio:");
	scanf("%f",precioP2);
	PreciodeventaP1=cantP1*precioP1;
	PreciodeventaP2=cantP2*precioP2;
	subtotal=PreciodeventaP1+PreciodeventaP2;
	iva=subtotal*0.12;
	total=subtotal+iva;
	printf("*****EMPRESA SUPERMAXI*****");
	printf("Cliente:%s\n",nombre);
	printf("Cedula:%i",cedula);
	printf("Descripcion\tCantida\tPrecio\tPrecio de venta\n");
	printf("%s\t\t%.2f\t\t%.2f\t%.2f\n",desP1,cantP1,precioP1,PreciodeventaP1);
	printf("%s\t\t%.2f\t\t%.2f\t%.2f\n",desP2,cantP2,precioP2,PreciodeventaP2);
	printf("\t\t\tSubtotal:%.2f\n",subtotal);
	printf("\t\t\t\tIva:%.2f\n",iva);
	printf("\t\t\t\t\tTotal:%.2f\n",total);
	
}
