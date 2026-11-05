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

void saisirNotes(int note[30][3], int eleve){
    for (int e = 0; e<eleve ; e++){
        printf("Eleve %d :\n", e+1);
        for (int i = 0; i < 3; i++)
        {
            printf ("   Note controle %d (0 a 20) : ",i+1);
            scanf("%d",&note[e][i]);
            while (note[e][i]>20 || note[e][i]<0)
            {
                printf ("   Note controle %d (0 a 20) : ",i+1);
                scanf("%d",&note[e][i]);
                if (note[e][i]>20 || note[e][i]<0)
                {
                    printf("Valeur invalide.\n");
                }
            }
        }
    }
    
     return;
}


void afficherNotes(int note[30][3], int eleve){
    printf("Tableau de notes\n");
    printf("Eleve   C1  C2  C3\n");
    for (int i=0; i<eleve ; i++){
        int note1,note2, note3;
        note1= note[i][0];
        note2= note[i][1];
        note3= note[i][2];
        printf("  %d    %d  %d  %d\n", i+1, note1, note2, note3);
    }

}


float calculerMoyenneEleve(int note[30][3], int selection){
    float moy=0.0f;
    moy=(note[selection-1][0]+note[selection-1][1]+note[selection-1][2])/3;
    return moy;
}


float calculerMoyenneGenerale(int note[30][3], int eleve, int selection){
    float moyg=0.0f;
    for (int i = 0; i < eleve; i++)
    {
        selection++;
        moyg += calculerMoyenneEleve(note, selection);
    }
    return moyg/3;
}