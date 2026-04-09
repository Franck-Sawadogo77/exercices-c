#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(void) {
	int n,m;
	
	printf("Entrez les deux nombres: ");
	scanf("%d%d",&n,&m);
	
	printf("Avant: %d-%d\n",n,m);
	swap(&n,&m);
	printf("Apres: %d-%d",n,m);
	
  return 0;	
}
