#include<stdio.h>
#include<stdlib.h>
#define DEBUG
int main(void) {
	int n,resultat;
	
	printf("Entrez n: ");
	scanf("%d",&n);
	
	resultat = 1;
	for(int i=1;i<=n;i++){
		resultat *= i;
		
		#ifdef DEBUG
		printf("Etape %d: %d\n",i,resultat);
		#endif
		
	}
	
	printf("\nResultat: %d",resultat);
	
	return 0;
}