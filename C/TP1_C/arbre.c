#include <stdio.h>

// On instancie les variables que l'on va utiliser
int hauteur;
int longspace;
int nbe;
int i;
int j;
int longueur;

void feuilles() {
    nbe = -1;
    for (j = 0; j < hauteur; j++) {
        nbe = nbe + 2;
        longspace = (longueur - nbe) / 2;

        for (i = 0; i < longueur; i++) {

            if ((i < longspace) || (i + 1 > (longspace + nbe))) {
                printf("=");
            }
            else {
                printf("*");
            }
            if (i == longueur - 1) {
                printf("\n");
            }
        }
    }
}

void arbre() {

    printf("\n\nExercice 4 : Algorithme d'affichage d'un arbre en * & =\n");

    // On demande et inscrit la valeur de la hauteur dans la variable
    printf("\nHauteur de l'arbre: ");
    scanf_s("%d", &hauteur);
    printf("\n");

    longueur = hauteur * 3;
    feuilles();
    hauteur = 2;
    feuilles();
}

int main(){
	
	arbre();

	return 0;
}