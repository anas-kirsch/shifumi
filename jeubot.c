#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3
#define QUITTER 0
#define MAX 255


char player_one[MAX];
char player_name[MAX];
char choix[MAX];
char choix1[MAX];
int score1= 0;
int scoreBOT= 0;
int botchoice;
char nom;
// char BOT_PC; ne sert que si je veux ecrire le nom du bot_pc dans une vaiable dans printf ou autre

void aname(char player_name[MAX],int length);
void achoix(char choix[MAX], int length,char* nom);
int achoixbot();
void screen(char* name);
// void abot(int botchoice); //int //
void apoint(int* score1,int* scorebot,char* player_one,char* choix1,int botchoice);

int main(){

    // system("clear");
    printf("-------------------------------------------------------------\n");

    printf(" ..######..##.....##.####.########.##.....##.##.....##.####\n ");
    printf(".##....##.##.....##..##..##.......##.....##.###...###..##.\n");
    printf(" .##.......##.....##..##..##.......##.....##.####.####..##.\n");
    printf(" ..######..#########..##..######...##.....##.##.###.##..##.\n");
    printf(" .......##.##.....##..##..##.......##.....##.##.....##..##. \n");
    printf(" .##....##.##.....##..##..##.......##.....##.##.....##..##.\n");
    printf(" ..######..##.....##.####.##........#######..##.....##.####\n");
   
    printf("-------------------------------------------------------------\n");

    printf("Entrez le nom du joueur 1... \n");
    aname(player_one,MAX);

    printf("---------------------------------------\n");
    printf("Le joueur 2 est BOT_PC... \n\n");

    
    system("clear");
    screen(player_one);
    while (score1 < 2 || scoreBOT < 2 )
    {
            

    
    printf("---------------------------------------\n");
    achoix(choix1,MAX,player_one);
   

    if (strcmp(choix1,"0")==0)
        {
            break;
        }
    

    printf("3\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("1\n");
        sleep(1);

    system("clear");
    botchoice = achoixbot();
    // abot(botchoice);

        
    
    // printf("%s \n",choix1);
    // printf("%d \n",botchoice);
   
    apoint(&score1, &scoreBOT, player_one, choix1, botchoice);

    if (score1 == 2)
    {
        // exit;
        printf("VICTOIRE de %s !\n",player_one);
        break;
    }
    else if (scoreBOT == 2)
    {
    //    exit;
       printf("VICTOIRE de BOT_PC !\n");
       break;
    }
    screen(player_one);
    
    

    }
    // system("clear");
    
    // system("clear");

    return 0;
}





        
void aname(char player_name[MAX],int length){

    // char player_name[MAX];
    memset(player_name,0,length);
    fgets(player_name,MAX,stdin);
    player_name[strlen(player_name)-1]=0;

    /*ex strlen*/

    // printf("test %s \n",player_name);
}


void screen(char* nom){
    printf("-------------- SHIFUMI ! --------------\n");

    printf("A vous de jouer %s ! \n\n",nom);
    printf("1- PIERRE \n");
    printf("2- FEUILLE \n");
    printf("3- CISEAUX \n");
    printf("0- QUITTER \n");
}





void achoix(char choix[MAX], int length,char* nom){

    

    memset(choix,0,length);
    fgets(choix,MAX,stdin);
    choix[strlen(choix)-1]=0;
    
     system("clear");

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









int achoixbot(){

    srand(time(NULL));

    int botchoice = (float)rand()/RAND_MAX * 3+1;
    // printf("BOT_PC fait %d \n",botchoice);
    
        if(botchoice == PIERRE){
        printf("BOT_PC fait PIERRE !\n\n");
        return PIERRE;
    }
    else if (botchoice == FEUILLE){
        printf("BOT_PC fait FEUILLE ! \n\n");      
        return FEUILLE;
    }   
    else if (botchoice == CISEAUX){
        printf("BOT_PC fait CISEAUX ! \n\n");  
        return CISEAUX;
    }
    
}   






// void abot(int botchoice){


//     if(botchoice == PIERRE){
//         printf("BOT_PC fait PIERRE !\n");
//     }
//     else if (botchoice == FEUILLE){
//         printf("BOT_PC fait FEUILLE ! \n");      
//     }   
//     else if (botchoice == CISEAUX){
//         printf("BOT_PC fait CISEAUX ! \n");  
//     }
// }




void apoint(int* score1,int* scoreBOT,char* player_one,char* choix1,int botchoice){   



    if (strcmp(choix1,"1")==0 && botchoice == 3) /*strcmp(choix1,"1")==0 && botchoice == CISEAUX)*/
    {
        printf("La PIERRE bat le CISEAUX %s a GAGNÉ ! \n",player_one);
        // score1= score1 +1;  
        (*score1)++;
        printf(" Score %s = % d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT); 
    }

    else if (strcmp(choix1,"1")==0 && botchoice == 2)
    {
        printf("La FEUILLE bat la PIERRE BOT_PC a GAGNÉ ! \n");
        (*scoreBOT)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT);
    }

    else if (strcmp(choix1,"2")==0 && botchoice == 1)
    {
        printf("La FEUILLE bat la PIERRE %s a GAGNÉ ! \n ",player_one);
        (*score1)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT);
    }

    else if (strcmp(choix1,"2")==0 && botchoice == 3)
    {
        printf("Le CISEAUX bat la FEUILLE BOT_PC a GAGNÉ ! \n");
        (*scoreBOT)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT);
    }

    else if (strcmp(choix1,"3")==0 && botchoice == 2)
    {
        printf("Le CISEAUX bat la FEUILLE %s a GAGNÉ ! \n",player_one);
        (*score1)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT);
    }
    else if (strcmp(choix1,"3")==0 && botchoice == 1)
    {
        printf("La PIERRE bat le CISEAUX BOT_PC a GAGNÉ !\n ");
        (*scoreBOT)++;
        printf(" Score %s = %d\n",player_one,*score1);
        printf(" Score BOT_PC = %d\n\n", *scoreBOT);
    }

    else if (atoi(choix1) == botchoice ) /*strcmp(choix1,botchoice)==0*/
    {
        printf("ÉGALITÉ !\n");
        printf("Score %s = %d \n",player_one,*score1);
        printf("Score BOT_PC = %d \n\n",*scoreBOT);

    }
        printf("Appuyez Entrer pour rejouer !\n ");
        getchar();
        system("clear");

}
    
    














    // if (score1 > 3)
    // {
    //   printf("Le vainqueur est %s \n",player_one);
     
    // }
    // else if (scoreBOT > 3 )
    // {
    //     printf("Le vainqueur est BOT_PC \n");
       

    // }