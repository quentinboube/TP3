#include <stdio.h>
#include "distributeur.h"

void afficher_menu(){
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
    printf("Votre choix : ");
    return;
}

int lireChoix(){
    int n=0;
    scanf ("%d", &n);
    return n;
}

int saisir_montant(){
    int montant=0;
    printf("Montant a retirer : ");
    scanf("%d",&montant);
    return montant;
}


int montant_valide(int montant){
    if (montant%5!=0 || montant<5 || montant>1000){
        printf("Erreur : montant invalide.\n");
        printf("Le montant doit etre entre 5 euros et 1000 euros et divisible par 5.\n");
        return 1;
    }
    return 0;
}


void calcul_distribution(int montant){
    
}