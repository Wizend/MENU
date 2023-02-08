#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./yes.h"
#include <time.h>
// Sécuriser les fonctions
// Optimiser les fonctions
// Faire les tests unitaires
// Modifier le nom des exercices (apréritif, entrées, plat, dessert) et tp (Menu boucle, pointeur, etc) pour en faire un vrai menu (gastro)
// Rajouter une fonction date par défaut

enum Mois { Janvier=1, Fevrier, Mars, Avril, Mai, Juin, Juillet, Aout, Septembre, Octobre, Novembre, Decembre};

typedef struct {
    unsigned short jour;
    enum Mois mois;
    unsigned annee;
} Date;

unsigned short nbJours (enum Mois mois);    // FINIS
bool bissextile (unsigned annee);           // FINIS
const char* MoisToString (enum Mois mois);  // FINIS

Date* creer_Date();                         // FINIS (pas test)
void liberer_Date (Date** d);               // FINIS
void initialiser_date (Date*);              // FINIS (pas test)
void increment_Date (Date* d, unsigned n);  // #include <time.h> : utiliser time() et utiliser les modulo (%12, %31, %24)
void afficher_Date (const Date* d);         // Volonté du prof, ex : printf("Nous sommes le 9 Fevrier 2024 et c'est une année non-bissextile")
short int comparer_Date (const Date* d1, const Date* d2); // #include <time.h> : utiliser difftime()

bool bissextile (unsigned annee) {

    if (annee%400 == 0) {
        printf("\n%d est une annee bissextile", annee);
        return true;
    } else {
        printf("\n%d n'est pas une annee bissextile", annee);
        return false;
    }
}

unsigned short nbJours (enum Mois mois) {
    int j31 = 31;
    int j30 = 30;
    int jfev = 28;
    int jfev_bis = 29;

    if( mois == Janvier || mois == Mars || mois == Mai || mois == Juillet || mois == Aout || mois == Octobre || mois == Decembre){
        printf("\nLe mois de %d comporte %d jours.", mois, j31);
    } else if (mois == Avril || mois == Juin || mois == Septembre || mois == Novembre){
        printf("\nLe mois de %d comporte %d jours.", mois, j30);
    } else if (mois == Fevrier && bissextile(true) ){
        printf("\nLe mois de %d comporte %d jours car l'annee choisie est bissextile.", mois, jfev_bis);
    }else {
        printf("\nLe mois de %d comporte %d jours.", mois, jfev);
    }
    return 0;
}

const char* MoisToString (enum Mois mois) { 

    const char *enumArray [12] = {
        [0] = "Janvier", 
        [1] = "Fevrier", 
        [2] = "Mars",
        [3] = "Avril",
        [4] = "Mai",
        [5] = "Juin",
        [6] = "Juillet",
        [7] = "Aout",
        [8] = "Septembre",
        [9] = "Octobre",
        [10] = "Novembre",
        [11] = "Decembre"
    };

    if (mois == Janvier) {
        return enumArray[0];
    }
    if (mois == 2) {
        return enumArray[1];
    }
    if (mois == 3) {
        return enumArray[2];
    }
    if (mois == 4) {
        return enumArray[3];
    }
    if (mois == 5) {
        return enumArray[4];
    }
    if (mois == 6) {
        return enumArray[5];
    }
    if (mois == 7) {
        return enumArray[6];
    }
    if (mois == 8) {
        return enumArray[7];
    }
    if (mois == 9) {
        return enumArray[8];
    }
    if (mois == 10) {
        return enumArray[9];
    }
    if (mois == 11) {
        return enumArray[10];
    }
    if (mois == 12) {
        return enumArray[11];
    }

    return 0;
};

Date* creer_Date() {

    Date *d = (Date*) malloc(sizeof(Date));

    return d;
};

void liberer_Date (Date** d) {
    
    if(yes("\nSouhaitez-vous liberer la date precedemment enregistre ? [O/n]")){
        if (*d) {
            free(*d);
            *d = NULL;
        };
    };
};

void initialiser_date (Date* d) {
    int size_d = sizeof(d) % sizeof(d[0]);
    int n = 1;

    while ( n == 0 ) {
    creer_Date();

    printf("\nDate n°1 (format : jj/mm/aaaa) : ");
        if (scanf("%d %u %u", d->jour, d->mois, d->annee) != 3) {
            printf("Mauvaise saisie !\n");
            return EXIT_FAILURE;
        };
    n--;
    };

    printf("Date : %d - %u - %u", d->jour, d->mois, d->annee);
};

// void increment_Date (Date* d, unsigned n) {

    

// };



// ****** CREER_DATE() TEST ******

// int total;
// int nbr_date;
// Date **d[nbr_date];

    // printf("\nCombien de date souhaitez-vous declarer ?");
    //     scanf("%d", &nbr_date);
    // for(size_t i = 0; i < sizeof d[nbr_date] / sizeof d[nbr_date]; ++i) {
    //     (d[total = nbr_date+i]);
    // }
    // printf("De la mémoire pour %d a ete alloue", nbr_date);




// enum Sexe { INCONNUE=0, MASCULIN, FEMININ, };

// typedef struct {
    
//     Date dateNaissance;
//     char numeroSecu[16];
//     char* nom;
//     char* prenom;

// }Personne;

// const char* SexeToString(enum Sexe s);

// Personne* creer_Personne(Personne**);
// void inintialiser_Personne(Personne*);
// void liberer_Personne(Personne** d);
// void afficher_Personne(const Personne* d);