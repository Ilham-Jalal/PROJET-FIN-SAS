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
	
 
    return 0;
}
