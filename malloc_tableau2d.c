#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n,m;
	
	printf("Nombres d'etudiants: ");
	scanf("%d",&n);
	
	printf("Nombres de notes: ");
	scanf("%d",&m);
	
	int** tab = malloc(n * sizeof(int*));
	if(tab==NULL) {
		printf("erreur allocation\n");
		return 1;
	}
	
	for(int i=0;i<n;i++) {
		tab[i] = malloc(m * sizeof(int));
		if(tab[i]==NULL){
			printf("Erreur allocation\n");
			return 1;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Entrez la note %d de l'etudiant %d: ",j+1,i+1);
			scanf("%d",&tab[i][j]);
		}
	}
	
	for(int i=0;i<n;i++) {
		int somme = 0;
		for(int j=0;j<m;j++){
			somme += tab[i][j];
		}
		printf("La somme de l'etudiant %d: %d\n",i+1,somme);
	}
	
	for(int i=0;i<n;i++) {
		free(tab[i]);
	}
	free(tab);
	tab = NULL;
	
	return 0;
}