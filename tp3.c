#include <stdio.h>
#include "tp3.h"


int main(){
    afficherMenu();
    printf ("Votre choix : ");
    if (lireChoix()==1)
    {
        saisirNombreEleves();
    }
    
    else if (lireChoix()==2)
    {
        saisirNotes();
    }

    return 0;
}