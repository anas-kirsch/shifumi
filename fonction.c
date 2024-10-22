

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3
#define QUITTER 0
#define MAX 255



void aname(char player_name[MAX],int length){

    // char player_name[MAX];
    memset(player_name,0,length);
    fgets(player_name,MAX,stdin);
    player_name[strlen(player_name)-1]=0;

    // printf("test %s \n",player_name);
}

    
    

void achoix(char choix[MAX], int length,char* nom){

    printf("-------------- SHIFUMI ! --------------\n");

    printf("%s\n",nom);
    printf("1- PIERRE \n");
    printf("2- FEUILLE \n");
    printf("3- CISEAUX \n");
    printf("0- QUITTER \n");

    memset(choix,0,length);
    fgets(choix,MAX,stdin);
    choix[strlen(choix)-1]=0;
    

    if(atoi(choix) == PIERRE){
        printf("%s a fait PIERRE !\n",nom);
    }
    else if (atoi(choix) == FEUILLE){
        printf("%s a fait FEUILLE ! \n",nom);      
    }   
    else if (atoi(choix) == CISEAUX){
        printf("%s a fait CISEAUX ! \n",nom);  
    }
    else if (atoi(choix)== QUITTER){
        printf("Vous quittez le jeu...");                     
        // break;
    }


    // else if (atoi(choix) > 3)
    // {
//         break;
    // }


    // }
}

