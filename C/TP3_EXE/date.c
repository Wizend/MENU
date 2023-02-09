#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "./yes.h"
// Sécuriser les fonctions
// Optimiser les fonctions
// Faire les tests unitaires

#define MEM(type) ((type*) malloc( sizeof(type) /* * taille (et le mettre en parametre)*/))

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
        return printf("\nC'est une annee bissextile", annee);
    } else {
        return printf("\nCe n'est pas une annee bissextile", annee);
    };
};

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
    
    static const unsigned short nbj1[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(bissextile != 0) {
        static const unsigned short nbj2[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return nbj2[mois];
    };

    return nbj1[mois];
};

const char* MoisToString (enum Mois mois) { 

    const char * months[] = { 
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet",
        "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };

};

Date* creer_Date() {

    Date *d = MEM(Date);
    if(d == NULL) {
        return NULL;
    };

    return d;

};

void liberer_Date (Date** d) {

    if(yes("\nSouhaitez-vous liberer la date precedemment enregistre ? [O/n]")){
        if (d != NULL ) {
            free(d);
            d = NULL;
        };
    };
};

void initialiser_date (Date* d, enum Mois mois) {

    const char * days[] = {
        "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"
    };

    printf("\nDate (format : jj/mm/aaaa) : ");
    if (scanf("%d %s %u", days[d->jour], MoisToString(mois)[d->mois], d->annee) != 3) {
        printf("Mauvaise saisie !\n");
    };
    
    if (d != NULL ) {
        printf("Date : %d - %s - %u", days[d->jour], MoisToString(mois)[d->mois], d->annee);
        printf(bissextile(stdout));
    } else {
    time_t timestamp = time( NULL );
    struct tm * now = localtime( & timestamp );

    printf( "%02d-%02d-%4d\n", now->tm_mday, now->tm_mon+1, now->tm_year+1900);
     
    printf( "Nous sommes le %s %d %s %d\n", days[now->tm_wday], now->tm_mday, MoisToString(mois)[now->tm_mon], now->tm_year+1900);
    };
    return 0;
};

void increment_Date (Date* d, unsigned n) {
    
};



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


// ****** MoisToString() TEST ******

    // const char *enumArray [12] = {
    //     [0] = "Janvier", 
    //     [1] = "Fevrier", 
    //     [2] = "Mars",
    //     [3] = "Avril",
    //     [4] = "Mai",
    //     [5] = "Juin",
    //     [6] = "Juillet",
    //     [7] = "Aout",
    //     [8] = "Septembre",
    //     [9] = "Octobre",
    //     [10] = "Novembre",
    //     [11] = "Decembre"
    // };

    // if (mois == Janvier) {
    //     return enumArray[0];
    // }
    // if (mois == 2) {
    //     return enumArray[1];
    // }
    // if (mois == 3) {
    //     return enumArray[2];
    // }
    // if (mois == 4) {
    //     return enumArray[3];
    // }
    // if (mois == 5) {
    //     return enumArray[4];
    // }
    // if (mois == 6) {
    //     return enumArray[5];
    // }
    // if (mois == 7) {
    //     return enumArray[6];
    // }
    // if (mois == 8) {
    //     return enumArray[7];
    // }
    // if (mois == 9) {
    //     return enumArray[8];
    // }
    // if (mois == 10) {
    //     return enumArray[9];
    // }
    // if (mois == 11) {
    //     return enumArray[10];
    // }
    // if (mois == 12) {
    //     return enumArray[11];
    // }

    // return 0;




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