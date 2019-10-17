#include<stdio.h>

int main()
{
	int c=1,nnum,numeros,suma=0;
	printf("Cuantos numeros va Ingresar:");
	scanf("%d",nnum);
	while(c<=nnum)
	{
		printf("Ingrese un numero:");
		scanf("%d",&numeros);
		suma=suma+numeros;
		c++;
	}
	printf("el valor de la suma de los numeros es:%d",suma);
	return 0;
}
