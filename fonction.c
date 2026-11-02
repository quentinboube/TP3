#include "tp3.h"
#include <stdio.h>

void afficherMenu(){
    printf("===== GESTION DE NOTES ===== \n 1. Saisir le nombre d'eleves \n 2. Saisir les notes des eleves \n 3. Afficher toutes les notes \n 4. Afficher la moyenne d'un eleve \n 5. Afficher la moyenne generale \n 6. Afficher la meilleure note de chaque controle \n 0. Quitter \n");
    printf("Si vous selectionnez un choix dans lequel il manque des informations, le programme vous les demandera.\n");
    return;
}

int lireChoix(){
    int n=0;
    scanf ("%d", &n);
    return n;
}

int saisirNombreEleves(){
    int eleve=0;
    while (eleve<=0 || eleve>30)
    {
        printf ("Entrez le nombre d'eleves (1 a 30) : ");
        scanf("%d",&eleve);
        if (eleve<=0 || eleve>30)
        {
            printf("Valeur invalide.\n");
        }
        
    }
     return eleve;
}

int saisirNotes(int note[3]){
    for (int i = 0; i < 3; i++)
    {
        printf ("   Note controle %d (0 a 20) : ",i+1);
        scanf("%d",&note[i]);
        while (note[i]>20 || note[i]<0)
        {
            printf ("   Note controle %d (0 a 20) : ",i+1);
            scanf("%d",&note[i]);
            if (note[i]>20 || note[i]<0)
            {
                printf("Valeur invalide.\n");
            }
        }
    }
    
     return 0;
}


void afficherNotes(int note[3]){
    printf("Tableau de notes\n");
    printf("Eleve   C1  C2  C3\n");
    

}