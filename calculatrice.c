#include<stdio.h>
#include<stdlib.h>

void AfficherMenu() {
	printf("======MENU======\n");
	printf("1. Addition\n");
	printf("2. Soustraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("==================\n");
}

int addition(int a, int b) {
	return a+b;
}

int soustraction(int a, int b) {
	return a-b;
}

int multiplication(int a, int b) {
	return a*b;
}

float division( int a, int b){
	if (b==0) {
		printf("Impossible de diviser par zero !");
	}
	return (float)a/b;
}



int main(void)
{
	int a,b,choix,resultat;
	float resdivision;
	
	AfficherMenu();
	
	printf("Entre deux nombres: ");
	scanf("%d%d",&a,&b);
	
	printf("Faites votre choix: ");
	scanf("%d",&choix);
	
	if (choix == 1) {
		resultat = addition(a,b);
		printf("Le resultat est: %d", resultat);
	} else if (choix == 2) {
		resultat = soustraction(a,b);
		printf("Le resultat est: %d", resultat);
	} else if (choix == 3) {
		resultat = multiplication(a,b);
		printf("Le resultat est: %d", resultat);
	} else if (choix == 4) {
		resdivision = division(a,b);
		printf("Le resultat est: %.2f", resdivision);
	} else {
		printf("Choix invalide!");
	}


	return 0;
} 