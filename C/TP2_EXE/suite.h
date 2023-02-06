#ifndef SUITE_H_INCLUDED
#define SUITE_H_INCLUDED

int suite(int n) {

printf("\n\nExercice 1: Calcul d'une suite\n");

    // Initialisation de la variable U avec la valeur de U1
    double U = 1;
    // Boucle qui calcule chaque terme de la suite
    for (int i = 2; i <= n; i++) {
      U = U + 1.0 / i;
    }
    printf("\nU%d est egale a: %.4f\n", n, U);

  return 0;
}
#endif