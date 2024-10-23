#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "fonction.c"

#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3
#define QUITTER 0
#define MAX 255

char player_one[MAX];
char player_two[MAX];
char player_name[MAX];
char choix[MAX];  
char choix1[MAX];  
char choix2[MAX];


int main(){

    while (1)
    {       
    
        printf("-------------- SHIFUMI ! --------------\n");
        printf("Entrez le nom du joueur 1... \n");
        aname(player_one,MAX);

        printf("Entrez le nom du joueur 2... \n");
        aname(player_two,MAX);

        


        printf("-------------- SHIFUMI ! --------------\n");
        achoix(choix1,MAX,player_one);

        printf("-------------- SHIFUMI ! --------------\n");
        achoix(choix2,MAX,player_two);


    }

    return 0;
}
