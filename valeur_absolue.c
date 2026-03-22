#include<stdio.h>
#include<stdlib.h>

int absolu(int a) {
	if(a<0) {
		return -1*a;
	} else {
		return a;
	}
}

int main(void) 
{
	int a;
	
	printf("Entrez un nombre: ");
	scanf("%d",&a);
	
	printf("La valeur absolue est: %d",absolu(a));
	
    return 0;
}
