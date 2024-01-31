#include <stdio.h>
#include <string.h>

#define Max_Taches 80


typedef struct{
	int jour;
	int mois;
	int annee;
}Date;


typedef struct {
    char description[50];
    Date dateEcheance;
    char priorite[50];
} Tache;


Tache t[80];
int nombretache = 0;



int main() {
	
    int choix;
    
    do {
    	
        printf("********MENU*******\n");
        printf("1- Ajouter une tache\n");
        printf("2- Afficher la liste des taches\n");
        printf("3- Modifier une tache\n");
        printf("4- Supprimer une tache\n");
        printf("5- Ordonner une tache\n");
        printf("6- Fitrer les taches\n");
        printf("0- Quitter\n");
        printf("Choisir une operation: ");
        scanf("%d", &choix);

        switch (choix) {
        	
            case 1:
                Ajouter();
                break;
            case 2:
                Afficher();
                break;
            case 3:
                Modifier();
                break;
            case 4:
                Supprimer();
                break;
            case 5:
                OrdonnerParDate();
                break;
            case 6:
                Filtrer();
                break;
            case 0:
                printf("Au revoir !!\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 0);

	
 
    return 0;
}
