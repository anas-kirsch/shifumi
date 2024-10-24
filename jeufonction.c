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
int score1= 0;
int score2= 0;


int main(){

       
    
    while (strcmp(choix1,"0")!=0 || strcmp(choix2,"0")!=0)
    {
    
        printf("-------------- SHIFUMI ! --------------\n");
        printf("Entrez le nom du joueur 1... \n");
        aname(player_one,MAX);

        printf("Entrez le nom du joueur 2... \n");
        aname(player_two,MAX);

        
        
        printf("-------------- SHIFUMI ! --------------\n");
        achoix(choix1,MAX,player_one);

        
        if (strcmp(choix1,"0")==0)
        {
            break;
        }

        printf("-------------- SHIFUMI ! --------------\n");
        achoix(choix2,MAX,player_two);

        if (strcmp(choix2,"0")==0)
        {
            break;
        }

        apoint(&score1,&score2,player_one,player_two,choix1,choix2);


    
    }

    

    return 0;
}