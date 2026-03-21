#include<stdio.h>
#include<stdlib.h>

int main() {
		int base;
		int exposant;
		int resultat=1;
		
		printf("Entrez la base: ");
		scanf("%d",&base);
		printf("Entrez l'exposant: ");
		scanf("%d",&exposant);
		
		for( int i =1; i<=exposant; i++) {
			resultat = resultat*base;
		}
		
		printf("Le resultat est: %d",resultat);
		
    return 0;
} 