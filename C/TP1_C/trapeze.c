#include <stdio.h>

void trapeze() {

	// On instancie les variables que l'on va utiliser
	int A;
	int B;
	int C;
	double D;


	printf("Exercice 1 : Algorithme de Calcule de la surface d'un trapeze\n");

	// On demande et inscrit les valeurs de A,B et C dans les variables 
	printf("\nEntrer A (en m ) :");
	scanf("%d", &A);
	printf("Entrer B (en m ) :");
	scanf("%d", &B);
	printf("Entrer C (en m ) :");
	scanf("%d", &C);

	// On fait le calcul avec les valeurs recuperes et on les caste explicitement (sinon probleme de float au niveau du resultat)
	D = ((double)A + (double)B) * (double)C * 0.5;

	// On affiche le resultat
	printf("\nLa surface du trapeze est de : %lf m.\n\n", D);

}

int main() {

    trapeze();

    return 0;
}