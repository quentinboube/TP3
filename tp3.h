#ifndef FONC
#define FONC

void afficherMenu();
int lireChoix();
int saisirNombreEleves();
void saisirNotes(int note[30][3], int eleve);
void afficherNotes(int note[30][3], int eleve);
float calculerMoyenneEleve(int note[30][3], int eleve, int selection);


#endif 