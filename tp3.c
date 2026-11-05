#include <stdio.h>
#include "tp3.h"


int main(){
    int note[30][3];
    int eleve =1;
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

            
            
            default:
                break;
            }
    } 
    
    

    return 0;
}