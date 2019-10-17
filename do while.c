#include <stdio.h>

int main()
{
    int num,resultado=1,cont=1;
    printf("Ingrese el numero:");
    scanf("%d",&num);
    do{
    	resultado=resultado*cont;
        cont++;
	}while(cont<=num);
	printf("%d  es %d\n",num,resultado);
	return 0;
}
