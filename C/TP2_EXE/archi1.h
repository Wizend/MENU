#ifndef ARCHI1_H_INCLUDED
#define ARCHI1_H_INCLUDED

// Fonction Archimede_Cn qui calcule la valeur 2 * x * y / (x + y)
double Archimede_Cn(double x, double y) {
  return 2 * x * y / (x + y);
}

// Fonction Archimede_In qui calcule la valeur sqrt(x * y)
double Archimede_In(double x, double y) {
  return sqrt(x * y);
}
#endif