#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./trapeze.h"
#include "./factoriel.h"
#include "./ascii.h"
#include "./arbre.h"
#include "./multi.h"
#include "./table.h"
#include "./yes.h"



int main(void) {

    trapeze(); //dessiner le schema en python
    factoriel(); //Marche pas sur MVS
    ascii(); //FINIS
    arbre(); //FINIS
    multi(); //FINIS
    table(); //FINIS

    yes(printf("Souhaitez-vous recommencez ? [O/n]"));
}