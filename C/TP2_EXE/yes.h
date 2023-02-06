// Author : Pablo (Stack Overflow)

#ifndef YES_H_INCLUDED
#define YES_H_INCLUDED

void clear_buffer(FILE *fp){

    int c;
    while(( c = fgetc(fp) ) != '\n' && c != EOF);

}

int yes(const char *prompt) {
    
    char line[10];
    int ret;

    do {
        printf("%s: ", prompt);
        fflush(stdout);

        ret = scanf("%9s", line);
        clear_buffer(stdin);

        if(ret == 1) {
            // catch entries like "yes" and "nooooooo"
            if(line[1] != 0) {
                line[0] = 0;
            }

            switch(line[0])
            {
                case 'o':
                case 'O':
                    return 1;

                case 'n':
                case 'N':
                    return 0;

                default:
                    printf("*** Entrée Invalide  *** <Seulement (O)ui ou (N)on sont acceptes>\n");
            }
        }
    } while(ret != EOF);
    
    return 0;
}

#endif