// header.h
// Fichier header unique pour tout le projet
// Contient tous les includes système + prototypes des utils (gotoligcol et Color)
// À inclure dans TOUS les .c (main.c, board.c, utils.c, etc.)

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>      // printf, getchar, fopen, etc.
#include <stdlib.h>     // system("cls"), rand, srand, exit
#include <time.h>       // time pour srand
#include <windows.h>    // tout ce qui est console Windows (COORD, Handle, etc.)

// Prototypes des fonctions utilitaires (implémentées dans utils.c)
void gotoligcol(int lig, int col);                      // déplacement curseur
void Color(int couleurDuTexte, int couleurDeFond);      // gestion couleurs


#endif // HEADER_H_INCLUDED
