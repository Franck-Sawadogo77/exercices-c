#include<stdio.h>
#include<stdlib.h>

int main(void)
 {	
	int notes[7];
	int somme=0;
	float moyenne;
	int nbre_up = 0;
	int nbre_down =0;
	
	for(int i=0;i<=6;i++) {
		printf("Entrez la note %d: ",i+1);
		scanf("%d",&notes[i]);
		somme += notes[i];
	}
		moyenne = (float)somme/7;
	
	for(int i =0;i<=6;i++)  {
		if(notes[i]>moyenne) {
			nbre_up += 1;
		}
		if(notes[i]<moyenne) {
			nbre_down += 1;
		}
	}
	
	printf("Moyenne: %.2f\n",moyenne);
	printf("Le nombre de notes superieur: %d\n",nbre_up);
	printf("Le nombre de notes inférieurs: %d",nbre_down);
	
	return 0;
}

