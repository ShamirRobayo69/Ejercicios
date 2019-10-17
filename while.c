#include<stdio.h>

void main()
{
	int c=1,nnum,suma=0;
	printf("Cuantos numeros va a Ingresar:");
	scanf("%d",&nnum);
	while(c<=nnum)
	{
		suma=suma+c;
		printf("%d\n",c);
		c++;
	}
	printf("La suma de %d numeros es:%d\n",nnum,suma);
}
