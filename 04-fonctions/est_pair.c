#include<stdio.h>
#include<stdlib.h>

int estPair(int n) {
	if (n%2!=0) {
		printf("Impair");
	} else {
		return 0;
	}
}

int main(void) 
{
	int n;
	printf("Entrez un nombre: ");
	scanf("%d",&n);
	printf("%d",estPair(n));

    return 0;
}