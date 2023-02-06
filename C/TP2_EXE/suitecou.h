#ifndef SUITECOU_H_INCLUDED
#define SUITECOU_H_INCLUDED

void suitecou() {

    printf("\n\nExercice 3: Calcul d'une suite couplee\n");

    unsigned int nb = 0;
    unsigned int i;
    unsigned int suite = 2;
    unsigned int u0 = 0;
    unsigned int u1 = 1;
    double v = 0;


    printf("\nEntrez le nombre n (n >= 0 ) : ");
    scanf("%u", &nb);

    for(i = 0; i <= nb + 1; i++){

        if(i == 0){
            suite = 0;
        }else if(i == 1){
            suite = 1;
        } else{
            suite = u0 + u1;
            u0 = u1;
            u1 = suite;
        }
    }
        v = (double)u1 / (double)u0;
        double fi = (1.0 + sqrtf(5.0)) / 2;

        printf("\nU[%u] = %f\n",nb,v);
        printf("\nLe nombre ( 1 + racine(5) ) / 2 : %f\n",fi);
}
#endif