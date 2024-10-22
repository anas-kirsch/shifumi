#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3
#define QUITTER 0
#define MAX 255

int main(){


    while (1)
    {
    
        printf("-------------- SHIFUMI ! --------------\n");
        printf("Entrez le nom du joueur 1... \n");

        char joueur1[MAX];
        memset(joueur1,0,sizeof(joueur1));
        fgets(joueur1,MAX,stdin);
        joueur1[strlen(joueur1)-1]=0;



        printf("Entrez le nom du joueur 2... \n");
       
        char joueur2[MAX];
        memset(joueur2,0,sizeof(joueur2));
        fgets(joueur2,MAX,stdin);
        joueur2[strlen(joueur2)-1]=0;


        printf("-------------- SHIFUMI ! --------------\n");

        printf("%s\n",joueur1);
        printf("1- PIERRE \n");
        printf("2- FEUILLE \n");
        printf("3- CISEAUX \n");
        printf("0- QUITTER \n");

        char choix1[MAX];
        memset(choix1,0,sizeof(choix1));
        fgets(choix1,MAX,stdin);
        choix1[strlen(choix1)-1]=0;
        

            if(atoi(choix1) == PIERRE){
                printf("%s a fait PIERRE !\n",joueur1);
        }
            else if (atoi(choix1) == FEUILLE){
                printf("%s a fait FEUILLE ! \n",joueur1);      
        }   
            else if (atoi(choix1) == CISEAUX){
                printf("%s a fait CISEAUX ! \n",joueur1);  
        }
            else if (atoi(choix1)== QUITTER){
                printf("Vous quittez le jeu...");                     
                break;
        }
            else if (atoi(choix1) > 3)
        {
                break;
        }
        
        


        printf("-------------- SHIFUMI ! --------------\n");

        printf("%s\n",joueur2);
        printf("1- PIERRE \n");
        printf("2- FEUILLE \n");
        printf("3- CISEAUX \n");
        printf("0- QUITTER \n");


        char choix2[MAX];
        memset(choix2,0,sizeof(choix2));
        fgets(choix2,MAX,stdin);
        choix2[strlen(choix2)-1]=0;


            if(atoi(choix2) == PIERRE){
                printf("%s a fait PIERRE ! \n",joueur2);
        }
            else if (atoi(choix2) == FEUILLE){
                printf("%s a fait FEUILLE ! \n",joueur2);      
        }   
            else if (atoi(choix2) == CISEAUX){
                printf("%s a fait CISEAUX ! \n",joueur2);  
        }
               else if (atoi(choix2)== QUITTER){
                printf("Vous quittez le jeu...");
                break;
        }
        

        int score1 = 0;
        int score2 = 0;

        

        if (strcmp(choix1,"1")==0 && strcmp(choix2,"3")==0){
            printf("La PIERRE bat le CISEAUX %s a GAGNÉ ! \n",joueur1);
            score1= score1 +1;
            printf(" Score %s = %d\n",joueur1,score1);
            printf(" Score %s = %d\n",joueur2, score2);

        }
        else if (strcmp(choix1,"1")==0 && strcmp(choix2,"2")==0)
        {
            printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n",joueur2);
            score2= score2 +1;
             printf(" Score %s = %d\n",joueur2,score2);
            printf(" Score %s = %d\n",joueur1, score1);
        }

        else if (strcmp(choix1,"2")==0 && strcmp(choix2,"1")==0)
        {
            printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n ",joueur1);
            score1= score1 +1;
            printf(" Score %s = %d\n",joueur1,score1);
            printf(" Score %s = %d\n",joueur2, score2);
        }

          else if (strcmp(choix1,"2")==0 && strcmp(choix2,"3")==0)
        {
            printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",joueur2);
            score2= score2 +1;
            printf(" Score %s = %d\n",joueur2,score2);
            printf(" Score %s = %d\n",joueur1, score1);
        }

         else if (strcmp(choix1,"3")==0 && strcmp(choix2,"2")==0)
        {
            printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",joueur1);
            score1= score1 +1;
           printf(" Score %s = %d\n",joueur1,score1);
            printf(" Score %s = %d\n",joueur2, score2);
        }
        else if (strcmp(choix1,"3")==0 && strcmp(choix2,"1")==0)
        {
            printf("La PIERRE bat le CISEAUX %s a GAGNÉ !\n ",joueur2);
            score2= score2 +1;
            printf(" Score %s = %d\n",joueur2,score2);
            printf(" Score %s = %d\n",joueur1, score1);
        }
        
        else if (strcmp(choix1,choix2)==0)
        {
            printf("ÉGALITÉ !\n");
            printf("%d\n",score1);
            printf("%d\n",score2);

        }
        
    }
        


    return 0;
}