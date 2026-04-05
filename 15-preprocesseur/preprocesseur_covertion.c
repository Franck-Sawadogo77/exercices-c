#include<stdio.h>
#include<stdlib.h>

#define EURO_EN_FCFA(x) ((x)*655.957)

int main(void) {
	int somme;
	
	printf("Entrez la somme en euro: ");
	scanf("%d",&somme);
	
	printf("La somme en FCFA: %.2f",EURO_EN_FCFA(somme));
	
	return 0;
}