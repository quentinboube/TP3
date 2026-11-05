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
    
}


void calcul_distribution(int montant){

}