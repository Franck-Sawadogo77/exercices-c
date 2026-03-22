#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int CompterChiffre(int n) {
	int compteur =0;
	while(n!=0) {
		n /= 10;
		compteur += 1;
	}
	return compteur;
}

int main(void) {
	
	int n;
	printf("Entrez un nombre: ");
	scanf("%d",&n);
	printf("Ce nombre a %d chiffres",CompterChiffre(n));
	return 0;
}