#include<stdio.h>
#include<stdlib.h>

#define MAX(a,b) ((a)>(b) ? (a) : (b))
#define MIN(a,b) ((a)<(b) ? (a) : (b))

int main(void) {
	int a,b,c;
	
	printf("Entrez nombres: ");
	scanf("%d%d%d",&a,&b,&c);
	
	int max = MAX(MAX(a,b),c);
	int min = MIN(MIN(a,b),c);
	
	printf("Max: %d - Min: %d",max,min);
	
	return 0;
}