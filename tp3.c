#include <stdio.h>
#include "tp3.h"


int main(){
    afficherMenu();
    printf ("Votre choix : ");
    int note[3];
    switch (lireChoix())
    {
    case 1:
        saisirNombreEleves();
        break;

    case 2:
        int eleve = saisirNombreEleves();
        for (int e=0; e<eleve; e++)
        {
            printf("Eleve %d :\n", e+1);
            saisirNotes(note);
        }
        break;

    case 3:
        saisirNotes(note);
        afficherNotes(note);
        break;

    
    
    default:
        break;
    }

    return 0;
}