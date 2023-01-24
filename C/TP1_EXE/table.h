#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED
    
void table() {
            
    int t = 0;       
    int g;
    int d;
    int val;
    int moyg = 0;        
    int moyd = 0;
    int moy = 0;

    printf("\n\nExercice 6 : Affichage d'un tableau � deux dimensions\n");
        
    printf("Entrez la taille du tableau : ");
    scanf("%d", &t);
    
    if (t == 0) {
        return;
    }
    int matrice[t + 1][t + 1];

    for (g = 0; g < t + 1; g++) {

        if (g < t) {
            for (d = 0; d < t + 1; d++) {
                if (d < t) {
                    printf("\n Entrez la valeur de la case %d,%d : ", g + 1, d + 1);
                    scanf("%d", &val);
                    matrice[g][d] = val;
                    moyd += val;
                    moy += val;
                }
                else {
                    matrice[g][d] = moyd / t;
                    moyd = 0;
                }
            }
        }
    }
    for (g = 0; g <= t; g++) {
        for (d = 0; d <= t; d++) {
            if (d < t && g < t) {
                printf("%d      ", matrice[g][d]);
                moyg += matrice[d][g];
            }
            else if (d == t && g < t) {
                printf("(%d) \n", matrice[g][d]);
                matrice[d][g] = moyg / t;
                moyg = 0;
            }
            else if (g == t && d < t) {
                printf("(%d)    ", matrice[g][d]);
            }
            else {
                matrice[g][d] = moy / (t * t);
                printf("(%d)", matrice[g][d]);
            }
        }
	}
}
#endif