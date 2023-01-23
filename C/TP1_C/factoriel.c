#include <stdio.h>
#include <string.h>

void factoriel() {

	printf("\n\nExercice 2 : Algorithme de Calcule de la somme et du factoriel d'un entier positif\n");

	// On instancie une variable pr démarrer la conditions avec la boucle while (cela nous permettra de redémarrer la boucle par la suite)
	int e = 1;

	// On démarre une boucle (cela nous permettra de relancer le programme plus tard en jouant avec la condition (e)
	while(e != 0){

		// On instancie les variables que l'on va utiliser
		char Y;
		int A;
		int Facto;
		int Facto2;
		int C = 1;
		int B = 0;
		int D = 1;
		int Somme = 0;
		int E = 1;
		int E2 = 1;

		printf("\nEntrer un entier positif :");
		scanf("%d", &A);

		// On calcule la somme de l'entier rentré
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


		// On instancie une boucle pour recommencer, avec demande à l'utilisateur
		printf("Voulez vous recommencer ? [O/N] : ");
		scanf("%c", &Y);


		if (strcmp(&Y, "O") || strcmp(&Y, "o")) {
			factoriel();
		}
		else if (strcmp(&Y, "N") || strcmp(&Y, "n")) {
			printf("N'hésitez pas à tester d'autre mini-jeux, Bye !");
			e = 0;
		}
		else {
			printf("Utilisez bien : [ O,o / N,n ]");
		}
	}
}

int main() {

    factoriel();

    return 0;

}