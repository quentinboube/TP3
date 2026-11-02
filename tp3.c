#include <stdio.h>
#include "tp3.h"


int main(){
    afficherMenu();
    printf ("Votre choix : ");
    if (lireChoix()==1)
    {
        saisirNombreEleves();
    }
    

    return 0;
}