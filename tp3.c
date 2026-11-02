#include <stdio.h>
#include "tp3.h"


int main(){
    afficherMenu();
    printf ("Votre choix : ");
    switch (lireChoix())
    {
    case 1:
        saisirNombreEleves();
        break;

    case 2:
        saisirNotes();
        break;

    case 3:
        afficherNotes();
        break;

    
    
    default:
        break;
    }

    return 0;
}