#include <stdio.h>
#include "distributeur.h"


int main()
{
    while (1)
    {
        int montant= 0;
        afficher_menu();
        switch (lireChoix())
        {
        case 1:
            montant = saisir_montant();
            if (montant_valide(montant)==0)
            {
                calcul_distribution(montant);
            }
            
            break;

        case 2:
            return 0;
        
        default:
            printf("Choix invalide");
            break;
        }
    }
    
    return 0;
}
