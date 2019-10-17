#include <stdio.h>

void main()
{
    int num,resultado=1,cont=1;
    printf("Ingrese el numero:");
    scanf("%d",&num);
    while(cont<=num)
    {
        resultado=resultado*cont;
        cont++;
    }
    printf("%d  es %d\n",num,resultado);
}
