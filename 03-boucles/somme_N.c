#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	int somme = 0;
	
	printf("Entrez n: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++) {
		somme = somme + i;
	}
	
	printf("La somme est: %d",somme);
	return 0;
} 