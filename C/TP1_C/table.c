#include <stdio.h>
#include <stdlib.h>

double table(){
	int taille = 0;
	int i = 0;
	int i2 = 0;
	int j = 0;
	int n;
	int tab[n][n];
	
	printf("Entrer la taille du tableau : ");
	scanf_s("%d", &taille);
	if (taille > 0)
	{
		tab[n][n] = malloc(sizeof(n) * taille);
		if (tab[n][n] == NULL)
		{
			return EXIT_FAILURE;
		}

		for (i = 0; i < taille; i++)
		{
			for (j = 0; j < taille; j++) {
				printf("Entrer l'element  [%d, %d] ", i + 1, j + 1);
				scanf_s("%d", &tab[i,j]);
			}
		}

		printf("\n\nVoici votre tableau de valeur :\n");
		for (i2 = 0; i2 < taille; i2++)
		{
			for (j = 0; j < taille; j++) {
				printf("[%d, %d] = %d\n", tab[i,j], i2 + 1);
			}
		}
		free(tab);
	}
	else(exit(0));

	return 0;
}

int main() {

    table();

    return 0;
}
