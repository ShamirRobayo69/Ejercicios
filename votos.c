#include<stdio.h>

void main()
{
	int voto1=0,voto2=0,voto3=0,voto4=0,voto5=0,total=0;
	float porcV1=0,porcV2=0,porcV3=0,porcV4=0,porcV5=0;
	printf("Ingrese su Voto:");
	scanf("%d",&voto);
	if(voto==1)
		voto1++;
	else if(voto==2)
		voto2++;
	else if(voto==3)
		voto3++;
	else if(voto==4)
		voto4++;
	else if(voto==5)
		voto5++;
	total=voto1+voto2+voto3+voto4+voto5;
	porcV1=voto1*100/total;
	porcV2=voto2*100/total;
	porcV3=voto3*100/total;
	porcV4=voto4*100/total;
	porcV5=voto5*100/total;
	printf("Votos Candidatos N°1 %d tiene un porcentaje %.2f\n",voto1,porcV1);
	printf("Votos Candidatos N°2 %d tiene un porcentaje %.2f\n",voto2,porcV2);
	printf("Votos Candidatos N°3 %d tiene un porcentaje %.2f\n",voto3,porcV3);
	printf("Votos Candidatos N°4 %d tiene un porcentaje %.2f\n",voto4,porcV4);
	printf("Votos Candidatos N°5 %d tiene un porcentaje %.2f\n",voto5,porcV5);
}
