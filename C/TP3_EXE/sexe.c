#include "./sexe.h"

const char* SexeToString(enum Sexe s) {
    
    const char * sex[] = { 
        "INCONNUE", "MASCULIN", "FEMININ"
    };

    return sex[s];
};

Personne* creer_Personne() {

    Personne *p = MEM(Personne);
    if(p == NULL) {
        return NULL;
    };

    return p;

};

void initialiser_Personne(Personne* p) {
  
        getchar();
        printf("Entrer le prénom : ");
        p->prenom = MEM(char);
        fgets(p->prenom, 60, stdin);
        
        printf("Entrer le nom : ");
        p->nom = MEM(char);
        fgets(p->nom, 60, stdin);

        printf("Entrer le sexe de la personne (0 = Inconnue || 1 = M || 2 = F) : ");
        scanf("%u", &(p->s));

        printf("Entrer la date de naissance (jj/mm/aaaa) : ");
        scanf("%hd %u %u", &(p->dateNaissance.jour), &(p->dateNaissance.mois), &(p->dateNaissance.annee));

        printf("Entrer le numéro Sécu : ");
        scanf("%15s", p->numeroSecu); 
};

void liberer_Personne(Personne** p) {
    if (p != NULL ) {
        free(p);
        p = NULL;
    };
};

void afficher_Personne(const Personne* p){

    if (p != NULL ) {

        printf("Informations sur la personne enregistree :\n");
        printf("Genre : %s\n", SexeToString(p->s));
        printf("Date de naissance : %hu-%hu-%hu\n", p->dateNaissance.jour, p->dateNaissance.mois, p->dateNaissance.annee);
        printf("Numero de Securite social : %s\n", p->numeroSecu);
        printf("Nom : %s\n", (p->nom == NULL) ? "" : p->nom);
        printf("Prénom : %s\n", (p->prenom == NULL) ? "" : p->prenom);

    } else {
        return;
    }
};
