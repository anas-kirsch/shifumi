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
        printf("Vous quittez le jeu...\n");                     
        
    }

}
        


void apoint(int* score1,int* score2,char* player_one, char* player_two,char* choix1,char* choix2){   


// char choix[MAX];  



    if (strcmp(choix1,"1")==0 && strcmp(choix2,"3")==0)
    {
        printf("La PIERRE bat le CISEAUX %s a GAGNÉ ! \n",player_one);
        // score1= score1 +1;  
        (*score1)++;
        printf(" Score %s = % d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2); 
    }
    else if (strcmp(choix1,"1")==0 && strcmp(choix2,"2")==0)
    {
        printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n",player_two);
        (*score2)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2);
    }

    else if (strcmp(choix1,"2")==0 && strcmp(choix2,"1")==0)
    {
        printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n ",player_one);
        (*score1)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2);
    }

    else if (strcmp(choix1,"2")==0 && strcmp(choix2,"3")==0)
    {
        printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_two);
        (*score2)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2);
    }

    else if (strcmp(choix1,"3")==0 && strcmp(choix2,"2")==0)
    {
        printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_one);
        (*score1)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2);
    }
    else if (strcmp(choix1,"3")==0 && strcmp(choix2,"1")==0)
    {
        printf("La PIERRE bat le CISEAUX %s a GAGNÉ !\n ",player_two);
        (*score2)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two, *score2);
    }
    else if (strcmp(choix1,choix2)==0)
    {
        printf("ÉGALITÉ !\n");
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score %s = %d\n",player_two,*score2);

    }
    // else if (choix1 > 3 && choix2 > 3 )
    // {
    //     printf("Erreur réessayer ...\n");
    // }
     
}


