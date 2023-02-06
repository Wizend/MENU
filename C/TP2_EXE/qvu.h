#ifndef QVU_H_DEFINE
#define QVU_H_DEFINE
#define MAX_THROWS 3


int qvu(void){

    printf("\n\nExercice 6: Jeu du 421\n");

    int num_games, num_wins, throw, dice[3], i, j;
    double win_ratio;

    srand(time(NULL)); // initialisation de rand()

    printf("\nCombien de parties voulez vous jouer : ");
    scanf("%d", &num_games);

    num_wins = 0;
    // Compteur de lancers
    for (i = 0; i < num_games; i++) {
        printf("\nPartie %d\n", i + 1);
        throw = 0; 
        // initialisation du tableau des dés
        dice[0] = dice[1] = dice[2] = 0;

        while (throw < MAX_THROWS && (dice[0] != 1 || dice[1] != 2 || dice[2] != 4)) {
            printf("Lancer %d avec 3 des : ", throw + 1);
            for (j = 0; j < 3; j++) {
                // lancer d'un dé
                dice[j] = rand() % 6 + 1; 
                printf("%d ", dice[j]);
            }
            throw++;
            printf("\n");
        }

        if (dice[0] == 1 && dice[1] == 2 && dice[2] == 4) {
            num_wins++;
            printf("\nPartie %d gagnée en %d coups\n", i + 1, throw);
        } else {
            printf("\nPartie %d perdue\n", i + 1);
        }
    }

    win_ratio = (double) num_wins / num_games;
    printf("\nVous avez joue %d parties, %d gagnees pour %d perdues soit %.2lf%% de gain\n",
    num_games, num_wins, num_games - num_wins, win_ratio * 100);

    return 0;
}
#endif