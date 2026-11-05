#include <stdio.h>
#include "tp3.h"


int main(){
    int note[30][3];
    int eleve =1;
    int selection=0;
    float moy=0.0f;
    while (1)
    {
        afficherMenu();
        printf ("Votre choix : ");
        switch (lireChoix())
        {
            case 0:
                return 0;

            case 1:
                eleve = saisirNombreEleves();
                break;

            case 2:
            
                saisirNotes(note, eleve);
                break;

            case 3:
                afficherNotes(note, eleve);
                break;

            case 4:
                while (selection < 1 || selection > eleve){
                    printf("Entrez l'indice de l'eleve (1 a %d) : ", eleve);
                    scanf("%d",&selection);
                }
                moy = calculerMoyenneEleve(note, eleve, selection);
                printf("La moyenne de l'eleve %d : %.2f \n", selection, moy);
                break;

            
            
            default:
                break;
            }
    } 
    
    

    return 0;
}