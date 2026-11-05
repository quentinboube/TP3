#include <stdio.h>
#include "distributeur.h"


int main()
{
    while (1)
    {
        afficher_menu();
          
        switch (lireChoix())
        {
        case 1:
            saisir_montant();
            break;

        case 2:
            return 0;
        
        default:
            break;
        }
    }
    
    return 0;
}
