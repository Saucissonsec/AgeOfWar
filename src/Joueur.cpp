#include "Joueur.h"

Joueur::Joueur(bool g)
{
    gauche = g;
    if(g)
    {
        base = new Base("Base J1");
    }
    else
    {
        base = new Base("Base J2");
    }
}

Joueur::~Joueur()
{

}

void Joueur::getGold(int gold)
{
    argent += gold;
}
