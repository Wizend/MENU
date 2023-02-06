#ifndef ARCHI2_H_INCLUDED
#define ARCHI2_H_INCLUDED

// Fonction Archimede_An qui calcule X et Y en fonction de N
void Archimede_An(int N, double *X, double *Y) {
  // Initialisation de X et Y
  *X = 4;
  *Y = 2 * sqrt(2);
  // Boucle qui calcule X et Y en utilisant les fonctions Archimede_Cn et Archimede_In
  for (int i = 1; i <= N; i++) {
    *X = Archimede_Cn(*X, *Y);
    *Y = Archimede_In(*X, *Y);
  }
}
#endif