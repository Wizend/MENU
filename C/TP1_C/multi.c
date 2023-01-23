#include <stdio.h>

int multi() {

	// On instancie les variables que l'on va utiliser
	int resA;
	int multi;
	int i;
	int j;
	int h = 1;
	
	printf("\n\nExercice 5 : Algorithme de calcule de table de multiplication\n");

	// On demande et inscrit la valeur d'un entier dans la variable
	printf("\nEntrer un entier positif :");
	resA = scanf_s("%d", &multi);

	
	// On calcule et affiche toute les tables de multiplication inf�rieur � l'entier choisie
	while (h < multi){
		printf(" %d = ", h);
		for (j = 0; j <= 10; j++) {
			printf(" %d ", h * j);
		}
		h++;
		printf("\n\n");
	}

	// On calcul et affiche la table de multiplication pour l'entier rentre
	printf(" %d = ", multi);
	for (i = 0; i <= 10; i++) {
		printf(" %d ", multi * i);
	}
	printf("\n");

	return 0;
}

int main(){
	
	multi();

	return 0;
}
