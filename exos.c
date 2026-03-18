// VARIABLES ET CALCULS
// EXO 1: Calcul de l'aire d'un cercle
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float r,aire;
	printf("Entrez le rayon r(en cm) : ");
	scanf("%f",&r);
	aire = 3.14 * r * r;
	printf("L'aire de ce cercle est de: %f",aire);
	return 0;
}

//EXO 2:  Convertis une vitesse de km/h en m/s.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float vitesse_en_kilo_heure;
	float vitesse_en_metre_par_seconde;
	
	printf("Entrez la vitesse en km/h: ");
	scanf("%f",&vitesse_en_kilo_heure);
	
	vitesse_en_metre_par_seconde = vitesse_en_kilo_heure/3.6;
	
	printf("Cette vitesse en m/s est de: %.2f m/s",vitesse_en_metre_par_seconde);
	 
	return 0;
}

//EXO 3: Calcule le prix TTC à partir du prix HT et un taux de TVA de 18%.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float prix_ht;
	float prix_ttc;
	float tva;
	
	printf("Entrez le prix Hors Taxe(HT): ");
	scanf("%f",&prix_ht);
	
	printf("Entrez le porcentage de la TVA: ");
	scanf("%f",&tva);
	
	prix_ttc = prix_ht * (1 + (tva/100));
	
	printf("Le prix TTC est de: %.2f",prix_ttc);
	 
	return 0;
}

//EXO 4: Calcule l'hypoténuse d'un triangle rectangle.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c;
	
	printf("Entrez la mesure d'un côté: ");
	scanf("%f",&a);
	
	printf("Entrez la mesure de l'autre côté: ");
	scanf("%f",&b);
	
	c = sqrt(a*a + b*b);
	
	printf("L'hypothénuse est de: %.2f",c);
	 
	return 0;
} 

//EXO 5: Calcule le salaire net à partir du salaire brut avec une déduction de x%.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int salaire_net,salaire_brut;
	float deduction;
	
	printf("Entrez votre salaire brut: ");
	scanf("%d",&salaire_brut);
	
	printf("Entrez le taux de deduction: ");
	scanf("%f",&deduction);
	
	salaire_net = salaire_brut * (1 - (deduction/100));
	
	printf("Le salaire net est de: %d",salaire_net);
	 
	return 0;
} 

//CONDITIONS
//EXO 1: Demande l'âge et affiche "Enfant" moins de 12 ans, "Adolescent" entre 12 et 17, "Adulte" entre 18 et 59, "Senior" 60 et plus.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int age;
	
	printf("Entrez votre âge: ");
	scanf("%d",&age);
	
	if(age<12) {
		printf("Enfant");
	} else if (age<18) {
		printf("adolescent");
	} else if (age<60) {
		printf("Adulte");
	} else {
		printf("Senior");
	}
	
	return 0;
} 

//EXO 2: Demande deux nombres et une opération + - * / et affiche le résultat
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

//EXO 3: Demande un caractère et dis si c'est une voyelle ou une consonne.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char caractere,a,i,u;
	
	printf("Entrez un caractere: ");
	scanf("%s", &caractere);
	
	if(caractere == a) {
		printf("Voyelle");
	} else if (caractere == i) {
		printf("Voyelle");
	} else if (caractere == u) {
		printf("Voyelle");
	} else {
		printf("consonne");
	}
	return 0;
} 

//EXO 4: Demande trois côtés d'un triangle et dis si c'est équilatéral, isocèle ou scalène
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c;
	printf("Entrez les 3 côtés: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==b && a==c) {
		printf("Triangle équilatéral");
	} else if (a==b || a==c || b==c) {
		printf("Isocèle");
	} else {
		printf("Quelconque");
	}
	return 0;
} 

//EXO 5: Demande le mois en chiffre et affiche le nombre de jours dans ce mois.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mois;
	printf("Entrez le mois: ");
	scanf("%d",&mois);
	if(mois==4 || mois==6 || mois==9 ||mois==11) {
		printf("Le mois %d a 30 jours.",mois);
	} else if(mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12) {
		printf("Le mois %d a 31 jours.",mois);
	} else if(mois==2) {
        printf("Le mois %d a 28 ou 29 jours.",mois);
    } else {
        printf("Mois invalide !");
    }
	
	return 0;
} 

//BOUCLES
//EXO 1: Affiche tous les nombres pairs entre 1 et 100.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	for (int i=0; i<=100; i++) {
		if(i%2==0) {
			printf("%d\n",i);
		}
	}
	return 0;
} 

//EXO 2 : Calcule la somme de 1 + 2 + 3 + ... + N où N est entré par l'utilisateur.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	int somme = 0;
	
	printf("Entrez n: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++) {
		somme = somme + i;
	}
	
	printf("La somme est: %d",somme);
	return 0;
} 

//EXO 3: Affiche le triangle suivant avec des étoiles.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, n;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//EXO 4: Demande des nombres en boucle et compte combien sont positifs et combien sont négatifs. S'arrête quand l'utilisateur entre 0
#include<stdio.h>
#include<stdlib.h>

int main() {
		int n;
    	int nbre = 0;
    while(1) {
    	
    	printf("Entrez un nombre: ");
    	scanf("%d",&n);
    	
    	if (n>0) {
    		nbre = nbre + 1;
		} else if (n<0) {
			nbre = nbre + 1;
		} else if (n==0) {
			break;
		} else {
			printf("Choix invalide");
		}
	
    	printf("Nombres positifs: \n",nbre);
    	printf("Nombres négatifs: \n",nbre);
	
	}
    return 0;
}


// EXO 5: Calcule la puissance d'un nombre. base élevé à exposant sans utiliser pow().
#include<stdio.h>
#include<stdlib.h>

int main() {
		int base;
		int exposant;
		int resultat=1;
		
		printf("Entrez la base: ");
		scanf("%d",&base);
		printf("Entrez l'exposant: ");
		scanf("%d",&exposant);
		
		for( int i =1; i<=exposant; i++) {
			resultat = resultat*base;
		}
		
		printf("Le resultat est: %d",resultat);
		
    return 0;
} 


//FONCTIONS
//EXO 1: Écris une fonction estPair qui retourne 1 si le nombre est pair et 0 sinon.
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

//EXO 2: Écris une fonction absolu qui retourne la valeur absolue d'un nombre sans utiliser abs().
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

//EXO 3 : Écris une fonction convertirCelsius et une fonction convertirFahrenheit et un menu pour choisir la conversion.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void AfficherMenu() {
	printf("=======MENU DE CONVERTION=====\n");
	printf("1. Celcius en Fahrenheit\n");
	printf("2. Fahrenheit en Celcius\n");
	printf("3. Quitter\n");
	printf("=========================\n");
}

float convertirCelsius(float a) {
	return (a * 9/5) + 32;
}

float convertirFahrenheit(float b) {
	return (b - 32) * 5/9;
}

int main(void) 
{
	float F,C;
	int choix;
	
	while(1) {
		AfficherMenu();
		printf("Entrez votre choix: ");
		scanf("%d",&choix);
		
		if(choix==3) {
			printf("Au revoir !");
			break;
		} else if (choix==1) {
			printf("Entrez la valeur en celcius: ");
			scanf("%f",&C);
			printf("La valeur en Fahrenheit: %.2f\n",convertirCelsius(C));
		} else if(choix==2) {
			printf("Entrez la valeur en Fahrenheit : ");
			scanf("%f",&F);
			printf("La valeur en Celcius: %.2f\n",convertirFahrenheit(F));
		} else {
			printf("Choix invalide !");
		}	
	}
	
    return 0;
}

// EXO 4: Écris une fonction compterChiffres qui compte le nombre de chiffres d'un entier. Ex : 1234 → 4 chiffres.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int CompterChiffre(int n) {
	int compteur =0;
	while(n!=0) {
		n /= 10;
		compteur += 1;
	}
	return compteur;
}

int main(void) {
	
	int n;
	printf("Entrez un nombre: ");
	scanf("%d",&n);
	printf("Ce nombre a %d chiffres",CompterChiffre(n));
	return 0;
}


// EXO 5: Écris une fonction afficherEtoiles qui prend un nombre N et affiche N étoiles sur une ligne.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void afficherEtoiles(int n) {
	for (int i=0; i<n; i++) {
		printf("*");
	}
	printf("\n");
}

int main(void) {
	int n;
	printf("Entrez le nombre d'étoiles à afficher: ");
	scanf("%d",&n);
	afficherEtoiles(n);
	return 0;
}

//TABLEAUX
//EXO 1: Demande 10 nombres, affiche la somme et la moyenne.
#include<stdio.h>
#include<stdlib.h>

int main(void)
 {	
	int tab[10];
	int somme=0;
	float moyenne;
	
	for(int i=0;i<=9;i++) {
	printf("Entrez le nombre %d: ",i+1);
	scanf("%d",&tab[i]);
	somme += tab[i];
	}
	moyenne = (float)somme/10;
	
	printf("La somme est: %d\n",somme);
	printf("La moyenne est: %.2f\n",moyenne);
	
	return 0;
}

//EXO 2: Demande 7 notes, affiche combien sont au dessus de la moyenne et combien sont en dessous.
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
		} else if (notes[i]<moyenne) {
			nbre_down += 1;
		}
	}
	
	printf("Moyenne: %.2f\n",moyenne);
	printf("Le nombre de notes superieur: %d\n",nbre_up);
	printf("Le nombre de notes inférieurs: %d",nbre_down);
	
	return 0;
}


//EXO 3: Demande 5 nombres et trie les du plus petit au plus grand.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tab[5];
	int temp;
	
	for(int i=0; i<=4;i++) {
		printf("Entrez le nombre %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<=4;i++) {
		for(int j=0;j<4-i;j++) {
			if(tab[j]>tab[j+1]){
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
	printf("Classement: ");
	
	for(int i=0;i<=4;i++) {
		printf("%d",tab[i]);
	}
	
	return 0;
}


// EXO 4: Demande 6 nombres et affiche seulement les nombres pairs.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tab[6];
	
	for(int i=0;i<=5;i++) {
	printf("Entrez le nombre %d: ",i+1);
	scanf("%d",&tab[i]);	
	}
	
	printf("Les nombres pairs sont: ");
	for(int i=0;i<=5;i++) {
		if(tab[i]%2==0) {
			printf("%d ", tab[i]);
		}
	}
	return 0;
}

// EXO 5: Demande 5 nombres, mets les dans un tableau, copie le tableau dans un autre et affiche les deux.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int tab1[5];
    int tab2[5];

    for(int i = 0; i <= 4; i++) {
        printf("Entrez le nombre %d: ", i+1);
        scanf("%d", &tab1[i]);
    }

    for(int i = 0; i <= 4; i++) {  
	    tab2[i] = tab1[i];
    }

    for(int i = 0; i <= 4; i++) {
        printf("Tableau 1: %d\n", tab1[i]);
        printf("Tableau 2: %d\n", tab2[i]);
    }

    return 0;
}

//CHAÎNES DE CARACTÈRES
// EXO 1: Demande un prénom et affiche combien de lettres il contient.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char prenom[50];
    
    printf("Entrez votre prénom: ");
    fgets(prenom,50,stdin);
    prenom[strlen(prenom)-1] = '\0';
    
    printf("Prénom: %s\n",prenom);
    printf("Ce prénom a %d lettres",strlen(prenom));
    
    return 0;
}

// EXO 2: Demande deux mots et dis s'ils sont identiques ou différents.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char mot1[50];
    char mot2[50];
    printf("Entrez le premier mot: ");
    scanf("%s",mot1);
    printf("Entrez le deuxieme mot: ");
    scanf("%s",mot2);
    
    if( strcmp(mot1, mot2) == 0 ) {
    	printf("Identique !");
	} else {
		printf("Different !");
	}
    
    
    return 0;
}

// EXO 3: Demande le nom, le prénom et la ville et affiche une carte d'identité formatée.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char nom[50];
    char prenom[50];
    char ville[50];
    
    printf("Entrez votre nom: ");
    fgets(nom,50,stdin);
    nom[strlen(nom)-1] = '\0';
    
    printf("Entre votre prenom: ");
    fgets(prenom,50,stdin);
    prenom[strlen(prenom)-1] = '\0';
    
    printf("Entre votre ville: ");
    fgets(ville,50,stdin);
    ville[strlen(ville)-1] = '\0';
    
    printf("=====CARTE D'IDENTITE=====\n");
    printf("Nom: %s\n",nom);
    printf("Prénom: %s\n",prenom);
    printf("Ville: %s\n",ville);
    printf("=============================\n");
    
    return 0;
}

// EXO 4: Demande un mot et affiche le à l'envers. Ex : "Bonjour" → "ruojnoB".
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char mot[100];
    
    printf("Entrez un mot: ");
    scanf("%s",mot);
    
    int longueur = strlen(mot);
    
    printf("Mot à l'envers: ");
    for (int i = longueur-1; i>=0; i--) {
    	printf("%c",mot[i]);
	}
    
    return 0;
}


// EXO 5: Demande un nom d'utilisateur et un mot de passe. Le nom correct est "admin" et le mot de passe "1234". 3 tentatives sinon accès bloqué.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char* nom = "admin";
    char* mot_de_passe = "1234";
    int nbre = 3;
    char essai_nom[50];
    char essai_mot[50];
    
    while(1) {
    printf("Entrez un nom d'utilisateur: ");
    scanf("%s",essai_nom);
    printf("Le mot de passe: ");
    scanf("%s",essai_mot);
    
    if((strcmp(essai_nom, nom) == 0) && (strcmp(essai_mot, mot_de_passe)==0)) {
    	printf("Accès autorisé");
    	break;
	}   else {
		nbre -= 1;
		if(nbre==0) {
			printf("Accès bloqué !\n");
			break;
		}
		printf("Il vous reste %d essais\n",nbre);
	}
	
	}
    return 0;
}














































































































































































