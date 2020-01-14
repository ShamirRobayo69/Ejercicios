/*Relizar un programa usando funciones que permita generar la serie de
n numeros pares y la tabla de multiplicar de cualquier numero*/
#include<locale.h>
#include<stdio.h>

void ingresoDatosPares(int);

void ingresoDatosTabla(int,int);

void seriePares(int);

void tablaMultiplicar(int,int);

void parImpar(int);

void parImparIngreso(int);

FILE *archivo; //Declaracion global

int main()
{
	int cantNum=0,tabla=0,lim=0,num=0;
	setlocale(LC_ALL,"spanish");// poner antes de iniciar a trabajar
	archivo=fopen("datos.txt","w");
	ingresoDatosPares(cantNum);
	ingresoDatosTabla(tabla,lim);
	tablaMultiplicar(tabla,lim);
	parImparIngreso(num);
}
void ingresoDatosPares(int cantNum)
{
//	printf("Ingrese la cantidad de n%cmeros:",163);//codigo ASCII 
	printf("Ingrese la cantidad de números:");//otra manera de escribir en español
	fputs("Ingrese la cantidad de números:",archivo);
	scanf("%d",&cantNum);
	fprintf(archivo,"%d\n",cantNum);
	seriePares(cantNum);
}
void ingresoDatosTabla(int tabla,int lim)
{
	int cont=1;
	printf("Ingrese la tabla de multiplicar:");
	fputs("Ingrese la tabla de multiplicar:",archivo);
	scanf("%d",&tabla);
	fprintf(archivo,"%d\n",tabla);
	printf("Ingrese el limite:");
	fputs("Ingrese el limite:",archivo);
	scanf("%d",&lim);
	fprintf(archivo,"%d\n",lim);
	tablaMultiplicar(tabla,lim);
}
void seriePares(int cantNum)
{
	int cont=1,par=0;
	while(cont<=cantNum)
	{
		par=par+2;
		printf("%d\n",par);
		fprintf(archivo,"%d\n",par);
		cont++;
	}
}
void tablaMultiplicar(int tabla,int lim)
{
	int cont=1,mult=1;
	while(cont<=lim)
	{
		mult=cont*tabla;
		printf("%d * %d = %d\n",tabla,cont,mult);
		cont++;
	}
}
//determinar par o impar
void parImparIngreso(int num)
{
	printf("Ingrese un el numero que decea saber si es Par o Impar:");
	fputs("Ingrese un el numero que decea saber si es Par o Impar:", archivo);
	scanf("%d",&num);
	fprintf(archivo,"%d\n",num);
	parImpar(num);
}
void parImpar(int num)
{
	if(num%2==0)
    {
        printf("El numero es par.");
    } 
	else
	{
        printf("El numero es Impar.");
    }
}
