// Contient les fonctions utiles à tout le monde : déplacement curseur et couleurs
// Tout vient direct des annexes du sujet (pages 8-9)

#ifndef UTILS_H
#define UTILS_H

#include <windows.h>  // obligatoire pour les fonctions Windows

// Positionne le curseur à la ligne lig et colonne col (0-based)
void gotoligcol(int lig, int col);

// Change la couleur du texte et du fond
// couleurDuTexte : 0 à 15 (voir liste dans utils.c)
// couleurDeFond : 0 à 15 (souvent 0 pour fond noir)
void Color(int couleurDuTexte, int couleurDeFond);

#endif
