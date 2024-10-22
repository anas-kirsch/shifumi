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







        

    //     int score1 = 0;
    //     int score2 = 0;

        

    //     if (strcmp(choix,"1")==0 && strcmp(choix2,"3")==0){
    //         printf("La PIERRE bat le CISEAUX %s a GAGNÉ ! \n",player_name);
    //         score1= score1 +1;
    //         printf(" Score %s = %d\n",player_name,score1);
    //         printf(" Score %s = %d\n",player_name, score2);

    //     }
    //     else if (strcmp(choix,"1")==0 && strcmp(choix2,"2")==0)
    //     {
    //         printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n",player_name);
    //         score2= score2 +1;
    //          printf(" Score %s = %d\n",player_name,score2);
    //         printf(" Score %s = %d\n",player_name, score1);
    //     }

    //     else if (strcmp(choix,"2")==0 && strcmp(choix2,"1")==0)
    //     {
    //         printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n ",player_name);
    //         score1= score1 +1;
    //         printf(" Score %s = %d\n",player_name,score1);
    //         printf(" Score %s = %d\n",player_name, score2);
    //     }

    //       else if (strcmp(choix,"2")==0 && strcmp(choix2,"3")==0)
    //     {
    //         printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_name);
    //         score2= score2 +1;
    //         printf(" Score %s = %d\n",player_name,score2);
    //         printf(" Score %s = %d\n",player_name, score1);
    //     }

    //      else if (strcmp(choix,"3")==0 && strcmp(choix2,"2")==0)
    //     {
    //         printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_name);
    //         score1= score1 +1;
    //        printf(" Score %s = %d\n",player_name,score1);
    //         printf(" Score %s = %d\n",player_name, score2);
    //     }
    //     else if (strcmp(choix,"3")==0 && strcmp(choix2,"1")==0)
    //     {
    //         printf("La PIERRE bat le CISEAUX %s a GAGNÉ !\n ",player_name);
    //         score2= score2 +1;
    //         printf(" Score %s = %d\n",player_name,score2);
    //         printf(" Score %s = %d\n",player_name, score1);
    //     }
        
    //     else if (strcmp(choix,choix2)==0)
    //     {
    //         printf("ÉGALITÉ !\n");
    //         printf("%d\n",score1);
    //         printf("%d\n",score2);

    //     }
        
    }
        


    return 0;
}
