#include <stdio.h>
#include "distributeur.h"


int main()
{
    int choix=2;
    while (1)
    {
        afficher_menu(choix);
          
        switch (lireChoix())
        {
        case 1:
            
            break;

        case 0:
            return 0;
        
        default:
            break;
        }
    }
    
    return 0;
}
