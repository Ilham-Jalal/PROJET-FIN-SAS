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

void Ajouter(){
	
    if (nombretache < Max_Taches) {
    	
    	
        printf("la description :");
        scanf(" %[^\n]s", t[nombretache].description);
        
		printf("la date d'echeance (JJ/MM/annee):");
        scanf("%d %d %d",&t[nombretache].dateEcheance.jour,&t[nombretache].dateEcheance.mois,&t[nombretache].dateEcheance.annee);
        
		printf("la priorite :");
		
	    scanf(" %[^\n]s",t[nombretache].priorite);
        
		printf("la tache ajoutee avec succes.\n");

        nombretache++;
    } else {
        printf("la tache n'a pas ete ajoutee.\n");
    }
}

int main() {
	
 
    return 0;
}
