#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

Date* creer_Date();                         // FINIS
void liberer_Date (Date** d);               // FINIS
void initialiser_Date (Date* d);            // FINIS
void increment_Date (Date* d, unsigned n);  // FINIS
void afficher_Date (const Date* d);         // FINIS
short int comparer_Date (const Date* d1, const Date* d2); // CHELOU

#endif
