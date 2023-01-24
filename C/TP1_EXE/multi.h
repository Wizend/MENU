#ifndef MULTI_H_INCLUDED
#define MULTI_H_INCLUDED

void multi() {

	printf("\n\nExercice 5 : Algorithme de calcule de table de multiplication\n");

	// On instancie les variables que l'on va utiliser
	int multip;
	int i;
	int j;
	int h = 1;

	// On demande et inscrit la valeur d'un entier dans la variable
	printf("\nEntrer un entier positif : ");
	scanf("%d", &multip);


	// On calcule et affiche toute les tables de multiplication inf�rieur � l'entier choisie
	while (h < multip){
		printf(" %d = ", h);
		for (j = 0; j <= 10; j++) {
			printf(" %d ", h * j);
		}
		h++;
		printf("\n\n");
	}

	// On calcul et affiche la table de multiplication pour l'entier rentre
	printf(" %d = ", multip);
	for (i = 0; i <= 10; i++) {
		printf(" %d ", multip * i);
	}
	printf("\n");
}
#endif