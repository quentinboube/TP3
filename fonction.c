#include "tp3.h"
#include <stdio.h>

void afficherMenu(){
    printf("===== GESTION DE NOTES ===== \n 1. Saisir le nombre d'eleves \n 2. Saisir les notes des eleves \n 3. Afficher toutes les notes \n 4. Afficher la moyenne d'un eleve \n 5. Afficher la moyenne generale \n 6. Afficher la meilleure note de chaque controle \n 0. Quitter \n");
    return;
}

int lireChoix(){
    int n=0;
    scanf ("%d", &n);
    return n;
}