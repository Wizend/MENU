#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "./suite.h"
#include "./suitediv.h"
#include "./suitecou.h"
#include "./archi1.h"
#include "./archi2.h"
#include "./qvu.h"
#include "./yes.h"



int main(void) {

    printf("#################\n");
    printf("#               #\n");
    printf("#      TP2      #\n");
    printf("#               #\n");
    printf("#################\n");

    while(yes("\n\nAppuyez sur [O/n] si vous souhaitez (re)commencer")) {
        
        int n;
        // Demande du nombre de termes
        printf("\nEntrez le nombre de termes de la suite a calculer n avec n > 0 (0 pour terminer) : ");
        scanf("%d", &n);
        printf("\n");
        // Si le nombre de termes est négatif, affiche une erreur
        if (n < 0) {
            printf("\nErreur, la valeur ne peut pas etre negative.\n");
        }
        // Si le nombre de termes est égal à 0, quitte la boucle
        else if (n == 0) {
            break;
        }
        // Sinon, calcule la somme des n premiers termes de la suite
        else {
            suite(n);
            suitediv();
            suitecou();

            printf("\n\nExercice 4: Calcul et Test d'Archimede Cn / In\n");
            int t;
            printf("\n Appuyer sur [O/o] pour afficher le resultat d'Archimede : ");
            scanf("%d", &t);
            clear_buffer(stdin);
            printf("\n");
            
            int r = Archimede_Cn(2, 4);
            printf("\nCn = %d\n", r);
            int r2 = Archimede_In(3, 9);
            printf("In = %d\n", r2);

            printf("\n\nExercice 5: Calcul et Test d'Archimede An\n");
            int q;
            printf("\n Appuyer sur [O/o] pour afficher le resultat d'Archimede : ");
            scanf("%d", &q);
            clear_buffer(stdin);
            printf("\n");            
            
            double X, Y;
            Archimede_An(n, &X, &Y);
            // Affichage des résultats
            printf("\nX = %f\n", X);
            printf("Y = %f\n", Y);

            qvu();
        }
    }
    return 0;
}