#ifndef SEXE_H_INCLUDED
#define SEXE_H_INCLUDED

#include "./date.h"

#define MEM(type) ((type*) malloc( sizeof(type) /* * taille (et le mettre en parametre)*/))

enum Sexe {INCONNUE=0, MASCULIN, FEMININ};

typedef struct {
    
    enum Sexe s;
    Date dateNaissance;
    char numeroSecu[16];
    char* nom;
    char* prenom;

}Personne;

const char* SexeToString(enum Sexe s);

Personne* creer_Personne();
void initialiser_Personne(Personne*);
void liberer_Personne(Personne** p);
void afficher_Personne(const Personne* p);

#endif