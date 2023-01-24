#ifndef FACTORIEL_H_INCLUDED
#define FACTORIEL_H_INCLUDED

void factoriel() {

	printf("\n\nExercice 2 : Algorithme de Calcule de la somme et du factoriel d'un entier positif\n");

	// On instancie les variables que l'on va utiliser
	int A;
	int Facto;
	int Facto2;
	int C = 1;
	int B = 0;
	int D = 1;
	int Somme = 0;
	int E = 1;
	int E2 = 1;

	printf("\nEntrer un entier positif : ");
	scanf("%d", &A);

	// On calcule la somme de l'entier rentré et 
	while (C <= A) {

		Somme = Somme + C;

		if (C == 1) {
			printf("%d ", C++);
		}
		else {
			printf("+ %d ", C++);
		}
	}
	printf("= %d", Somme);

	// On relance une boucle pour le second affichage dans l'autre sens
	printf("\n%d =", Somme);
	while (D <= A) {

		B = B + D;

		if (D == 1) {
			printf(" %d ", D++);
		}
		else {
			printf("+ %d ", D++);
		}
	}

	// On affiche la somme
	printf("\nLa somme de l\'entier positif est de : %d \n", Somme);

	// On calcule le factoriel de l'entier rentré
	for (Facto = 1; Facto <= A; Facto++) {
		E *= Facto;
		if (Facto == 1) {
			printf("%d ", Facto);
		}
		else {
			printf("* %d ", Facto);
		}
	}
	printf("= %d", E);

	// On relance une boucle pour le second affichage dans l'autre sens
	printf("\n%d =", E);
	for (Facto2 = 1; Facto2 <= A; Facto2++) {
		E2 *= Facto2;
		if (Facto2 == 1) {
			printf(" %d ", Facto2);
		}
		else {
			printf("* %d ", Facto2);
		}
	}

	// On affiche le factoriel
	printf("\nLe factoriel de l\'entier positif est de : %d \n", E);
}
#endif