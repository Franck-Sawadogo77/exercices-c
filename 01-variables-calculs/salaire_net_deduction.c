#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int salaire_net,salaire_brut;
	float deduction;
	
	printf("Entrez votre salaire brut: ");
	scanf("%d",&salaire_brut);
	
	printf("Entrez le taux de deduction: ");
	scanf("%f",&deduction);
	
	salaire_net = salaire_brut * (1 - (deduction/100));
	
	printf("Le salaire net est de: %d",salaire_net);
	 
	return 0;
} 