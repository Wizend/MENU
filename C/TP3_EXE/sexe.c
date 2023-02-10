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

void liberer_Personne(Personne** p) {
    
    if (*p != NULL ) {
        free(*p);
        p = NULL;
    };
};

void initialiser_Personne(Personne* p) {

        printf("\n\nEntrer le prenom : ");
        p->prenom = MEM(char);
        fgets(p->prenom, 50, stdin);
        
        printf("Entrer le nom : ");
        p->nom = MEM(char);
        fgets(p->nom, 50, stdin);

        printf("Entrer le sexe de la personne (0 = Inconnue || 1 = M || 2 = F) : ");
        scanf("%u", &(p->s));

        printf("Entrer la date de naissance (jj/mm/aaaa) : ");
        scanf("%hd %u %u", &(p->dateNaissance.jour), &(p->dateNaissance.mois), &(p->dateNaissance.annee));

        printf("Entrer le numero de Secu : ");
        scanf("%15s", p->numeroSecu);
};

void afficher_Personne(const Personne* p){

    if (p != NULL ) {

        printf("\n\nInformations sur la personne enregistree :\n");
        printf("\nPrenom : %s", p->prenom);
        printf("Nom : %s", p->nom);
        printf("Genre : %s\n", SexeToString(p->s));
        printf("Date de naissance : %hu-%hu-%hu\n", p->dateNaissance.jour, p->dateNaissance.mois, p->dateNaissance.annee);
        printf("Numero de Securite social : %s\n", p->numeroSecu);

    } else {
        return;
    }
};
