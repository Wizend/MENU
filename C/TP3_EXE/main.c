#include <stdio.h>
#include <stdlib.h>
#include "./date.h"
#include "./sexe.h"
#include "./yes.h"

// Sécuriser les fonctions
// Optimiser les fonctions
// Faire les tests unitaires

int main (void) {

    printf("#################\n");
    printf("#               #\n");
    printf("#      TP3      #\n");
    printf("#               #\n");
    printf("#################\n");

    while(yes("\n\nAppuyez sur [O/n] si vous souhaitez (re)commencer")) {
        if(yes("\n\nSouhaitez-vous comparer deux dates ? [O/N]")) {
        
            printf("\nEntrer la premiere date a comparer : ");
            Date *d1 = creer_Date();
            initialiser_Date(d1);

            printf("\nEntrer la seconde date a comparer : ");
            Date *d2 = creer_Date();
            initialiser_Date(d2);

            printf("\nVoici les deux dates choisies : \n");
            afficher_Date(d1);
            if (bissextile(d1->annee)){
                printf("\nEt c'est une annee bissextile\n");
            } else {
                printf("\nEt c'est une annee non-bissextile\n");
            };
            afficher_Date(d2);
            if (bissextile(d2->annee)){
                printf("\nEt c'est une annee bissextile\n");
            } else {
                printf("\nEt c'est une annee non-bissextile\n");
            };
            
            int i = comparer_Date(d1, d2);
            switch(i) {
                case -1:
                    printf("\n%d/%d/%d est une date anterieur a %d/%d/%d", d1->jour, d1->mois, d1->annee, d2->jour, d2->mois, d2->annee);
                    break;
                case 1: 
                    printf("\n%d/%d/%d  est une date ulterieur a %d/%d/%d",d1->jour,d1->mois,d1->annee,d2->jour, d2->mois, d2->annee);
                    break;
                case 0: 
                    printf("\n%d/%d/%d est la meme date que %d/%d/%d", d1->jour, d1->mois, d1->annee, d2->jour, d2->mois, d2->annee);
                    break;
            };
            
            int n;
            if (yes("\n\nSouhaitez-vous incrementer la premiere date ? [O/N]")) {
                printf("De combien de jour : ");
                scanf("%d", &n);
                increment_Date(d1, n);
                afficher_Date(d1);
            };

            if (yes("\n\nSouhaitez-vous incrementer la seconde date ? [O/N]")) {
            
                printf("De combien de jour : ");
                scanf("%d", &n);
                increment_Date(d2, n);
                afficher_Date(d2);
            };     

            int f = comparer_Date(d1, d2);
            printf("\nDésormais :\n");
            switch(f) {
                case -1:
                    printf("\n%d/%d/%d est une date anterieur a %d/%d/%d", d1->jour, d1->mois, d1->annee, d2->jour, d2->mois, d2->annee);
                    break;
                case 1: 
                    printf("\n%d/%d/%d  est une date ulterieur a %d/%d/%d",d1->jour,d1->mois,d1->annee,d2->jour, d2->mois, d2->annee);
                    break;
                case 0: 
                    printf("\n%d/%d/%d est la meme date que %d/%d/%d", d1->jour, d1->mois, d1->annee, d2->jour, d2->mois, d2->annee);
                    break;
            };

            liberer_Date(&d1);
            liberer_Date(&d2);
        };
            
        if (yes("\n\nSouhaitez-vous inscrire une nouvelle personne dans votre liste de contact ? [O/N]")) {
            
            Personne *p1 = creer_Personne();
            initialiser_Personne(p1);
            afficher_Personne(p1);
            liberer_Personne(&p1);
        };
    };
    return 0;
};