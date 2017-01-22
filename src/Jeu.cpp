#include "Jeu.h"

Jeu::Jeu()
{
    J1 = Joueur(true);
    J2 = Joueur(false);
    t = PlayingArea(11);
}

Jeu::~Jeu()
{
    //dtor
}

