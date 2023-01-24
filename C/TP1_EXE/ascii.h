#ifndef ASCII_H_INCLUDED
#define ASCII_H_INCLUDED
#include "./yes.h"

void ascii() {
	
	printf("\n\nExercice 3 : Algorithme d'affichage des caract�res de la table ASCII entre 34 & 127\n");
	printf("\n");

	// On instancie les variables que l'on va utiliser
	int A = 34;
	int r;
	int B = 40;

	printf("\n Appuyer sur [O/o] pour afficher la table ascii : ");
	scanf("%d", &r);
	clear_buffer(stdin);
	printf("\n");

	// On affiche la table ASCII � partir de 34
	while (A < 128) {
		printf(" %d = %c ", A, A);
		A++;

		// On utilise une condition pour afficher les lignes par paquet de 10
		if (A == B) {
			printf("\n\n");
			B = B + 10;
		}
	}
	printf("\n");
}
#endif