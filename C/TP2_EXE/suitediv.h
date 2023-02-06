#ifndef SUITEDIV_H_INCLUDED
#define SUITEDIV_H_INCLUDED

int suitediv(void) {
  
  printf("\n\nExercice 2: Calcul d'une suite divergente\n");
  
  // Demande du nombre de termes à calculer
  int n;
  printf("\nEntrez le nombre n (n >= 0) : ");
  scanf("%d", &n);
  printf("\n");

  if (n < 0) {
    // Si le nombre de termes est négatif, affiche une erreur
    printf("\nErreur, la valeur ne peut pas etre negative.\n");
  } else {
    // Initialisation de la variable U0 et U1
    int U0 = 0, U1 = 1;
    // Affichage du premier terme
    printf("U[0] = %d\n", U0);
    // Si le nombre de termes est supérieur à 1, affiche le deuxième terme
    if (n > 0) {
      printf("U[1] = %d\n", U1);
    }
    // Si le nombre de termes est supérieur à 2, calcule et affiche les termes suivants
    if (n > 1) {
      for (int i = 2; i <= n; i++) {
        int Un = U0 + U1;
        printf("U[%d] = %d\n", i, Un);
        U0 = U1;
        U1 = Un;
      }
    }
  }
  return 0;
}
#endif