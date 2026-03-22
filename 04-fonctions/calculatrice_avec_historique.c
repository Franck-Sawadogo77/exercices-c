/*
 * ============================================================
 * Projet     : Calculatrice avec historique
 * Auteur     : Franck
 * Langage    : C
 * Description: Calculatrice en console permettant d'effectuer
 *              les 4 opérations de base (addition, soustraction,
 *              multiplication, division) avec un compteur du
 *              nombre de calculs effectués.
 * ============================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* ---------- Affichage du menu principal ---------- */
void AfficherMenu() {
    printf("\n=====  CALCULATRICE  =====\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quitter\n");
    printf("==========================\n");
}

/* ---------- Opérations arithmétiques ---------- */

/* Retourne la somme de a et b */
int addition(int a, int b) {
    return a + b;
}

/* Retourne la différence de a et b */
int soustraction(int a, int b) {
    return a - b;
}

/* Retourne le produit de a et b */
int multiplication(int a, int b) {
    return a * b;
}

/* Retourne le quotient de a par b (float pour conserver les décimales) */
/* Gère le cas de la division par zéro */
float division(int a, int b) {
    if (b == 0) {
        printf("Erreur : division par zéro impossible.\n");
        return 0;
    }
    return (float)a / b;
}

/* ---------- Programme principal ---------- */
int main(void) {
    int a, b;           /* Les deux opérandes saisis par l'utilisateur */
    int choix;          /* Le choix du menu */
    int resultat;       /* Résultat pour les opérations entières */
    float resDivision;  /* Résultat pour la division (nombre décimal) */
    int nbre = 0;       /* Compteur de calculs effectués (historique) */

    while (1) {
        AfficherMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        /* Option de sortie */
        if (choix == 5) {
            printf("\nAu revoir !\n");
            printf("Vous avez effectué %d calcul(s).\n", nbre);
            break;
        }

        /* Saisie des deux nombres */
        printf("Entrez deux nombres : ");
        scanf("%d %d", &a, &b);

        /* Incrémentation du compteur d'historique */
        nbre++;

        /* Exécution de l'opération choisie */
        if (choix == 1) {
            resultat = addition(a, b);
            printf("Résultat : %d\n", resultat);

        } else if (choix == 2) {
            resultat = soustraction(a, b);
            printf("Résultat : %d\n", resultat);

        } else if (choix == 3) {
            resultat = multiplication(a, b);
            printf("Résultat : %d\n", resultat);

        } else if (choix == 4) {
            resDivision = division(a, b);
            printf("Résultat : %.2f\n", resDivision);

        } else {
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
        }
    }

    return 0;
}
