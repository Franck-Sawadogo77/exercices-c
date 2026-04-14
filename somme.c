#include<stdio.h>
#include<stdlib.h>

struct Noeud{
	int valeur;
	struct Noeud* suivant;
};

struct Noeud* AjouterEntete(struct Noeud* tete, int valeur){
	struct Noeud* nouveau = malloc(sizeof(struct Noeud));
	if(nouveau==NULL){
		printf("erreur Allocation\n");
		return tete;
	}
	nouveau->valeur=valeur;
	nouveau->suivant=tete;
	return nouveau;
}

void afficher(struct Noeud* tete){
	struct Noeud* courant = tete;
	while(courant != NULL) {
		printf("%d ",courant->valeur);
		courant = courant->suivant;	
	}
}

void liberer(struct Noeud* tete){
	struct Noeud* courant = tete;
	struct Noeud* temp;
	while(courant != NULL){
	temp = courant->suivant;
	free(courant);
	courant = temp;
	}
}

int main(void){
	struct Noeud* tete = NULL;
	int n,valeur;
	
	printf("Nombre d'elements: ");
	scanf("%d",&n);
	
	int somme = 0;
	for(int i=0;i<n;i++){
		printf("element %d: ",i+1); 
		scanf("%d",&valeur); 
		somme+=valeur; 
		tete = AjouterEntete(tete, valeur);
	}
	
	
	printf("Liste: ");
	afficher(tete);
	liberer(tete);
	printf("\nSomme: %d",somme);
	
	return 0;
}
