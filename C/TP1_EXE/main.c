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

    while(yes("\n\nAppuyez sur [O/n] si vous souhaitez (re)commencer")) {

        trapeze(); //dessiner le schema en python
        factoriel(); //Marche pas sur MVS
        ascii(); //FINIS
        arbre(); //FINIS
        multi(); //FINIS
        table(); //FINIS    
    }
}