#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){
    char paisdigitado[50];
    int i;
    while(scanf("%s",paisdigitado)!=EOF){

        if(!strcmp(paisdigitado,"brasil"))
            printf("Feliz Natal!\n");
        else if(!strcmp(paisdigitado,"alemanha"))
            printf("Frohliche Weihnachten!\n");
        else if(!strcmp(paisdigitado,"austria"))
            printf("Frohe Weihnacht!\n");
        else if(!strcmp(paisdigitado,"coreia"))
            printf("Chuk Sung Tan!\n");
        else if(!strcmp(paisdigitado,"espanha"))
            printf("Feliz Navidad!\n");
        else if(!strcmp(paisdigitado,"grecia"))
            printf("Kala Christougena!\n");
        else if(!strcmp(paisdigitado,"estados-unidos"))
            printf("Merry Christmas!\n");
        else if(!strcmp(paisdigitado,"inglaterra"))
            printf("Merry Christmas!\n");
        else if(!strcmp(paisdigitado,"australia"))
            printf("Merry Christmas!\n");
        else if(!strcmp(paisdigitado,"portugal"))
            printf("Feliz Natal!\n");
        else if(!strcmp(paisdigitado,"suecia"))
            printf("God Jul!\n");
        else if(!strcmp(paisdigitado,"turquia"))
            printf("Mutlu Noeller!\n");
        else if(!strcmp(paisdigitado,"argentina"))
            printf("Feliz Navidad!\n");
        else if(!strcmp(paisdigitado,"chile"))
            printf("Feliz Navidad!\n");
        else if(!strcmp(paisdigitado,"mexico"))
            printf("Feliz Navidad!\n");
        else if(!strcmp(paisdigitado,"antardida"))
            printf("Merry Christmas!\n");
        else if(!strcmp(paisdigitado,"canada"))
            printf("Merry Christmas!\n");
        else if(!strcmp(paisdigitado,"irlanda"))
            printf("Nollaig Shona Dhuit!\n");
        else if(!strcmp(paisdigitado,"belgica"))
            printf("Zalig Kerstfeest!\n");
        else if(!strcmp(paisdigitado,"italia"))
            printf("Buon Natale!\n");
        else if(!strcmp(paisdigitado,"libia"))
            printf("Buon Natale!\n");
        else if(!strcmp(paisdigitado,"siria"))
            printf("Milad Mubarak!\n");
        else if(!strcmp(paisdigitado,"marrocos"))
            printf("Milad Mubarak!\n");
        else if(!strcmp(paisdigitado,"japao"))
            printf("Merii Kurisumasu!\n");
        else
            printf("-- NOT FOUND --\n");
    }





    return 0;
}
