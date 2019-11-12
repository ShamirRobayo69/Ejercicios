#include <stdio.h>

float sumaValor(float,float);

float sumaReferencia(float*,float*);

void main()
{
	float num1=0,num2=0;
	printf("Ingrese el Numero 1:");
	scanf("%f",&num1);
	printf("Ingrese el Numero 2:");
	scanf("%f",&num2);
	printf("La suma paso x valores %.2f\n",sumaValor(num1,num2));
	printf("El valor de Numero 1 es %.2f y valor de Numero 2 es %.2f\n",num1,num2);
	printf("La suma paso x referencia %.2f\n",sumaReferencia(&num1,&num2));
	printf("El valor de Numero 1 es %.2f y valor de Numero 2 es %.2f\n",num1,num2);
}
float sumaValor(float a,float b)
{
	return a+b;
}
float sumaReferencia(float *a,float *b)
{
	*a=7;
	*b=2;
	return *a+*b;
}
