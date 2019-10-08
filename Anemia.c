#include<stdio.h>

void main()
{
	int edad;
	float nivelhemo;
	printf("Ingrese su Edad en meses:");
	scanf("%d",&edad);
	printf("Ingrese su nivel de Hemoglobina:");
	scanf("%f",&nivelhemo);
	if(edad>=0 && edad<=1 && nivelhemo>=13 && nivelhemo<=26)
		printf("No tiene Anemia");
	else if(edad>=1&&edad<=6&&nivelhemo>=10&&nivelhemo<=18)
		printf("No tiene Anemia");
	else if(edad>=6&&edad<=12&&nivelhemo>=11&&nivelhemo<=15)
		printf("No tiene Anemia");
	else if(edad>=12&&edad<=60&&nivelhemo>=11.5&&nivelhemo<=15)
		printf("No tiene Anemia");
	else if(edad>=60&&edad<=120&&nivelhemo>=12.6&&nivelhemo<=15.5)
		printf("No tiene Anemia");
	else if(edad>=120&&edad<=180&&nivelhemo>=13&&nivelhemo<=15.5)
		printf("No tiene Anemia");
	else
		printf("Tiene Anemia");
}
