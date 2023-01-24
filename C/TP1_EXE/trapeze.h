#ifndef TRAPEZE_H_INCLUDED
#define TRAPEZE_H_INCLUDED

void trapeze() {

	// On instancie les variables que l'on va utiliser
	int A;
	int B;
	int C;
	double D;


	printf("\n\nExercice 1 : Algorithme de Calcule de la surface d'un trapeze\n");

	// On demande et inscrit les valeurs de A,B et C dans les variables 
	printf("\nEntrer A (en m ) : ");
	scanf("%d", &A);
	printf("Entrer B (en m ) : ");
	scanf("%d", &B);
	printf("Entrer C (en m ) : ");
	scanf("%d", &C);

	// On fait le calcul avec les valeurs r�cup�r�s et on les caste explicitement (sinon probl�me de float au niveau du r�sultat)
	D = ((double)A + (double)B) * (double)C * 0.5;

	// On affiche le r�sultat
	printf("\nLa surface du trapeze est de : %lf m.\n\n", D);
}
#endif