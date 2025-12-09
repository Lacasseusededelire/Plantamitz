// Fonctions copiées direct du sujet, j'ai juste ajouté des commentaires pour qu'on s'y retrouve

#include "header.h"

// Fonction pour déplacer le curseur (annexe page 8)
void gotoligcol(int lig, int col)
{
    // ressources
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord);
}

// Fonction pour gérer les couleurs (annexe pages 8-9)
// Rôle : change la couleur du texte dans la console, ainsi que la couleur du fond pour la ligne
// Compatibilité : windows XP et plus
void Color(int couleurDuTexte, int couleurDeFond)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

/*
// Liste des couleurs qu'on utilise souvent (je laisse en commentaire pour référence)
0 : Noir          8 : Gris foncé
1 : Bleu foncé    9 : Bleu fluo
2 : Vert foncé   10 : Vert fluo
3 : Turquoise    11 : Turquoise clair
4 : Rouge foncé  12 : Rouge fluo
5 : Violet       13 : Violet clair
6 : Jaune foncé  14 : Jaune
7 : Gris clair   15 : Blanc
*/
