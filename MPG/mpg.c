#include "mpg.h"

int main(){

    int choice;

    // ---------- MENU ----------
    do {
    choice = menu();
    switch (choice){
        case 1 :
            printf("\n Ajouter/ Modifier nouvelle journée\n\n");
            NewGame();
            break;
        case 2 :
            printf("\n Ajouter joueur\n\n");
            NewPlayer();
            break;
        case 3 : 
            printf("\n Visionner liste de joueurs\n\n");
            PlayerList();
            break;
        case 4 :
            printf("\n Calculer journée\n\n");
            break;
        case 5 :
            printf("\n Calculer classement final\n\n");
            break;
        case 6 :
            printf("\n Visi4onner résultat journée\n\n");
            break;
        case 7 :
            printf("\n Visionner classement général\n\n");
            break;
    }
    } while (choice!=0);
        printf("Fin du programme");
        return 0;
}



// ---------- Menu function ----------
int menu(){

    int choice;
    printf("\n\n 1- Ajouter/ Modifier nouvelle journée");
    printf("\n 2- Ajouter joueur");
    printf("\n 3- Visionner liste de joueurs");
    printf("\n 4- Calculer journée");
    printf("\n 5- Calculer classement final");
    printf("\n 6- Visionner résultat journée");
    printf("\n 7- Visionner classement général\n");
    scanf("%d",&choice);
    return choice;
}

// ---------- Directory creation ----------
int NewDir(char MatchDay){
    mkdir (MatchDay);
    return 0;
}

// ---------- Player List ----------
int PlayerList(){
    FILE *List;
    char c;
    List= fopen("Player.txt","r");

    c=fgetc(List);
    while(c!= EOF){
        printf("%c",c);
        c=fgetc(List);
    }

    fclose(List);
    return 0;
}

// ---------- New Player ----------
int NewPlayer(){
    char Player[15];
    FILE *List;
    List= fopen("Player.txt","a");

    printf("Nouveau joueur : ");
    scanf("%s",Player);

    fprintf(List,"%s\n",Player);
    fclose(List);
    return 0;
}

// ---------- New Match Day ----------
int NewGame(){

    int day;
    char dayNbr[40] = "./MatchDay/J";

    printf("Numéro de la journée : ");
    scanf("%d",day);

    strcat(dayNbr,day);
    strcat(dayNbr,".txt");

    NewDir(dayNbr);



}