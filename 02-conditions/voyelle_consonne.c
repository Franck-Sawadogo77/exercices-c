#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char caractere,a,i,u;
	
	printf("Entrez un caractere: ");
	scanf("%s", &caractere);
	
	if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
		printf("Voyelle");
	
	} else {
		printf("consonne");
	}
	return 0;
} 