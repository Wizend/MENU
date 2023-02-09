#include "date.h"


bool bissextile (unsigned annee) {

    if (annee%400 == 0) {
        return true; 
    } else {
        return false;
    };
};

unsigned short nbJours (enum Mois mois) {
    
    // int j31 = 31;
    // int j30 = 30;
    // int jfev = 28;
    // int jfev_bis = 29;

    // if( mois == Janvier || mois == Mars || mois == Mai || mois == Juillet || mois == Aout || mois == Octobre || mois == Decembre){
    //     printf("\nLe mois de %d comporte %d jours.", mois, j31);
    // } else if (mois == Avril || mois == Juin || mois == Septembre || mois == Novembre){
    //     printf("\nLe mois de %d comporte %d jours.", mois, j30);
    // } else if (mois == Fevrier && bissextile(true) ){
    //     printf("\nLe mois de %d comporte %d jours car l'annee choisie est bissextile.", mois, jfev_bis);
    // }else {
    //     printf("\nLe mois de %d comporte %d jours.", mois, jfev);
    // }
    
    static const unsigned short nbj1[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(bissextile(true)) {
        static const unsigned short nbj2[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return nbj2[mois];
    };

    return nbj1[mois];
};

const char* MoisToString (enum Mois mois) { 

    const char * months[] = { 
        "0", "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet",
        "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };

    return months[mois];
};

Date* creer_Date() {

    Date *d = MEM(Date);
    if(d == NULL) {
        return NULL;
    };

    return d;

};

void liberer_Date (Date** d) {
    if (d != NULL ) {
        free(d);
        d = NULL;
    };
};

void initialiser_Date (Date* d) {

    printf("\nDate (format : jj/mm/aaaa) : ");
    scanf("%hd %u %u", &(d->jour), &(d->mois), &(d->annee));
};

void afficher_Date (const Date* d) {

    const char * days[] = {
    "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"
    };

    if (d != NULL ) {
        printf("\nDate : %d - %s - %d", d->jour, MoisToString(d->mois), d->annee);  
    } else {
    time_t timestamp = time( NULL );
    struct tm * now = localtime( & timestamp );

    printf( "\n%02d-%02d-%4d\n", now->tm_mday, now->tm_mon+1, now->tm_year+1900);
     
    printf( "\nNous sommes le %s %d %d %d\n", days[now->tm_wday], now->tm_mday, now->tm_mon, now->tm_year+1900);
    };
};

void increment_Date (Date* d, unsigned n) {

    d->jour += n;
    while (d->jour > nbJours(d->mois))
    {
        d->jour -= nbJours(d->mois);
        d->mois = (enum Mois)((unsigned short)d->mois % 12 + 1);
        if (d->mois == Janvier)
        {
            d->annee++;
        };
    };
};

short int comparer_Date (const Date* d1, const Date* d2) {

    if (d1->annee < d2->annee) {
       return -1;
    } else if (d1->annee > d2->annee) {
       return 1;
    };

    if (d1->annee == d2->annee) {
         if (d1->mois<d2->mois)
              return -1;
         else if (d1->mois>d2->mois)
              return 1;
         else if (d1->jour<d2->jour)
              return -1;
         else if(d1->jour>d2->jour)
              return 1;
         else
              return 0;
    };
    return 0;
};
