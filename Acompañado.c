#include<stdio.h>
#include<stdlib.h>
#define tam 30

void inicializarArreglo(int[]);

void vectores(int);

void incrementodelinea(int);

void main()
{
	int arreglo[tam]={2,4,5,-1},cantNum=0,op;//Inicilizael arreglo
	while(op<=3)
	{
		printf("Inicilizacion Areglos\n2.Datos Vector\n3.Incremento de linea\n4.Salir\n");
		scanf("%d",op);
		switch(op)
		{
			case 1:
				inicializarArreglo(arreglo);
				break;
			case 2:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",cantNum);
				vectores(cantNum);
			break;
			case 3:
				printf("Ingrese la cantidad de numeros:");
				scanf("%d",&cant);
				printf("Ingrese el numero a buscar:");
				scanf("%d",&num);	
				numBuscar(cant,num);
			case 4:
				exit(0);
			break;
			default:
				printf("Opcion invalida\n");
			break;
		}
	}
}
void inicializarArreglo(int arreg[tam])
{
	int cont=0;
	while(cont<4)
	{
		printf("Arreglo[%d]=%d\n",cont,arreg[cont]);
		cont++;
	}
}
void vectores(int cant)
{
	int cont=0,arreglo[tam];
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Elementos del vector\n");
	cont=0;
	while(cont<cant)
	{
		printf("Elemento[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
}
void incrementodelinea(int cant)
{
	int cont=0,arreglo[tam],buscar=0,cuenta=0;
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Ingrese el elementos a buscar\n");
	scanf("%d",&buscar);
	cont=0;
	while(cont<cant)
	{
		if(numero==arreglo[cont])
		cuenta++;
	cont++;
	}
	printf("El numero se repite %d\n",buscar)
}
