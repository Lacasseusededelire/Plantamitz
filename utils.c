// utils.c
// Implémentation des fonctions utilitaires (copiées direct du sujet pages 8-9)

#include "header.h"     // <-- maintenant on inclut header.h au lieu de windows.h direct

void gotoligcol(int lig, int col)
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord);
}

void Color(int couleurDuTexte, int couleurDeFond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

/* Liste couleurs (pour référence rapide)
0 Noir, 1 Bleu foncé, 2 Vert foncé, 3 Turquoise, 4 Rouge foncé,
5 Violet, 6 Jaune foncé, 7 Gris clair, 8 Gris foncé, 9 Bleu fluo,
10 Vert fluo, 11 Turquoise clair, 12 Rouge fluo, 13 Rose/violet,
14 Jaune, 15 Blanc
*/
