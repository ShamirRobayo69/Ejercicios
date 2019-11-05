#include<stdio.h>
#include<math.h>

//pow=raiz cuadrada;
//(variable,2)===ELEVACION AL CUADRADO;

//float areaCirculo(float radio); // DEFINE LA VARIABLE EN LA FUNCION;
float areaCirculo(float); //CUALQUIERA DE LAS DOS FORMAS // DEFINE LA VARIABLE DESPUES;

int factorial(int);

int tablamultiplicar(int,int);

void parImpar(int num);

void NnumerosparoImpar(int);

void main()
{
	float radio=0;// NO IMPORTA EL NOMBRE DE LA VARIABLE
	int nume=0,lim=0,tabla=0,op,cont=0,num=0;
	do
	{
	
		printf("1.Area del Circulo\n2.Factorial de un Numero\n3.Tabla de multiplicar\n4.Par o Impar\n5.De N numeros cuantos son Pares o Impares\n6.Salir\n");
		printf("Escoja una Opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("Area de un circulo\n");
				printf("Ingrese el radio:");
				scanf("%f",&radio);// NO IMPORTA EL NOMBRE DE LA VARIABLE
				printf("El area del Circulo es: %.2f\n",areaCirculo(radio)); // NO IMPORTA EL NOMBRE DE LA VARIABLE
				getch();
				system("cls");
			break;
			case 2:
				printf("Factorial de un Numero:");
				scanf("%d",&nume);
				printf("El factorial es:%d\n",factorial(nume));
				getch();
				system("cls");
			break;
			case 3:
				printf("Cual es el limite:\n ");
				scanf("%d",&lim);
				printf("Cual es tamaño de la tabla:\n ");
				scanf("%d",&tabla);
				tablamultiplicar(lim,tabla);
				getch();
				system("cls");
			break;
			case 4:	
				printf("Par o Impar\n");
				printf("Ingrese un Numero:");
				scanf("%d",&nume);
				parImpar(nume);
				getch();
				system("cls");
			break;
			case 5:
				printf("Ingrese cuantos Numeros desea saber si son Pares o Impares:");
				scanf("%d",&num);
				NnumerosparoImpar(num);
				getch();
				system("cls");
			break;
			case 6:
				exit(0);
			break;
		}
	}while(op<=5);
}
float areaCirculo(float radio) 
{
	float area=0,pi=3.1416;
	area=pi*
	pow(radio,2);
	return area;
}
int factorial(int nume)
{
	int fact=1,cont=1;
	while(cont<=nume)
	{
		fact=fact*cont;
		cont++;
	}
	return fact;
}
int tablamultiplicar(int lim,int tabla)
{
	int cont=1,multi=0;
	while(cont<=lim)
	{
		multi=tabla*cont;
		printf("%d * %d  %d\n",tabla,cont,multi);
		cont ++;
	}
	return multi;
}
void parImpar(int num)
{
	if(num%2==0)
		printf("Es par\n");
	else
		printf("Es Impar\n");
}
void NnumerosparoImpar(int num)
{
	int cont=1,nn=0,par=0,impar=0;
	while(cont<=num)
	{
		printf("Ingrese un numero:");
		scanf("%d",&nn);
		if(nn%2==0)
		par=par+1;
		else
		impar=impar+1;
		cont++;		
	}
	printf("La cantidad de numeros pares son %d y la cantidad de impares son %d",par,impar);
}

















