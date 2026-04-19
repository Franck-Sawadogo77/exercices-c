#include<stdio.h>
#include<stdlib.h>

int main(void)
 {	
	int tab[10];
	int somme=0;
	float moyenne;
	
	for(int i=0;i<=9;i++) {
	printf("Entrez le nombre %d: ",i+1);
	scanf("%d",&tab[i]);
	somme += tab[i];
	}
	moyenne = (float)somme/10;
	
	printf("La somme est: %d\n",somme);
	printf("La moyenne est: %.2f\n",moyenne);
	
	return 0;
}
