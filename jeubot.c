#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3
#define QUITTER 0
#define MAX 255

char player_one[MAX];
char player_name[MAX];
// char choix[MAX];
char choix1[MAX];
int score1= 0;
int scoreBOT= 0;
int botchoice; 
// char BOT_PC; ne sert que si je veux ecrire le nom du bot_pc dans une vaiable dans printf ou autre

int main(){



    printf("-------------- SHIFUMI ! --------------\n");
    printf("Entrez le nom du joueur 1... \n");

    aname(player_one,MAX);

    printf("---------------------------------------\n");
    printf("Le joueur 2 est BOT_PC... \n\n");
    
    achoix(choix1,MAX,player_one);

    achoixbot(botchoice);
    abot(botchoice);

    apoint(score1, scoreBOT, player_one,choix1,botchoice);



    return 0;
}





        
void aname(char player_name[MAX],int length){

    // char player_name[MAX];
    memset(player_name,0,length);
    fgets(player_name,MAX,stdin);
    player_name[strlen(player_name)-1]=0;

    // printf("test %s \n",player_name);
}










void achoix(char choix[MAX], int length,char* nom){

    printf("-------------- SHIFUMI ! --------------\n");

    printf("A vous de jouer %s ! \n\n",nom);
    printf("1- PIERRE \n");
    printf("2- FEUILLE \n");
    printf("3- CISEAUX \n");
    printf("0- QUITTER \n");

    memset(choix,0,length);
    fgets(choix,MAX,stdin);
    choix[strlen(choix)-1]=0;
    

    if(atoi(choix) == PIERRE){
        printf("%s fait PIERRE !\n",nom);
    }
    else if (atoi(choix) == FEUILLE){
        printf("%s fait FEUILLE ! \n",nom);      
    }   
    else if (atoi(choix) == CISEAUX){
        printf("%s fait CISEAUX ! \n",nom);  
    }
    else if (atoi(choix)== QUITTER){
        printf("Vous quittez le jeu...\n");                     
        
    }
}










void achoixbot(int botchoice){

    srand(time(NULL));

    botchoice = (float)rand()/RAND_MAX * 3+1;
    printf("BOT_PC fait %d \n",botchoice);
    
}   








void abot(char botchoice){


    if(botchoice == PIERRE){
        printf("BOT_PC fait PIERRE !\n");
    }
    else if (botchoice == FEUILLE){
        printf("BOT_PC fait FEUILLE ! \n");      
    }   
    else if (botchoice == CISEAUX){
        printf("BOT_PC fait CISEAUX ! \n");  
    }
    }









void apoint(int* score1,int* scorebot,char* player_one,char* choix1,char* botchoice){   



    if (strcmp(choix1,"1")==0 && strcmp(botchoice,"3")==0)
        {
            printf("La PIERRE bat le CISEAUX %s a GAGNÉ ! \n",player_one);
            // score1= score1 +1;  
            (*score1)++;
            printf(" Score %s = % d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT); 
        }
    else if (strcmp(choix1,"1")==0 && strcmp(botchoice,"2")==0)
        {
            printf("La FEUILLE bat la PIERRE BOT_PC a GAGNÉ ! \n");
            (scoreBOT)++;
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT);
        }

    else if (strcmp(choix1,"2")==0 && strcmp(botchoice,"1")==0)
        {
            printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n ",player_one);
            (*score1)++;
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT);
        }

    else if (strcmp(choix1,"2")==0 && strcmp(botchoice,"3")==0)
        {
            printf("Le CISEAUX bat la FEUILLE BOT_PC a GAGNÉ ! \n");
            (scoreBOT)++;
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT);
        }

    else if (strcmp(choix1,"3")==0 && strcmp(botchoice,"2")==0)
        {
            printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_one);
            (*score1)++;
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT);
        }
    else if (strcmp(choix1,"3")==0 && strcmp(botchoice,"1")==0)
        {
            printf("La PIERRE bat le CISEAUX BOT_PC a GAGNÉ !\n ");
            (scoreBOT)++;
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n", scoreBOT);
        }
    else if (strcmp(choix1,botchoice)==0)
        {
            printf("ÉGALITÉ !\n");
            printf(" Score %s = %d\n",player_one,*score1);
            printf(" Score BOT_PC = %d\n",scoreBOT);

        }

}

