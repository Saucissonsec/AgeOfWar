#ifndef JOUEUR_H
#define JOUEUR_H
#include <vector>
#include "Unite.h"
#include "Base.h"


class Joueur
{
    public:
        Joueur(bool g = true);
        virtual ~Joueur();
        void getGold(int gold = 8); //par défaut 8 pièce à chaque tour, on utilise le paramètre lors d'un combat remporté

    protected:

    private:
        std::vector<Unite> listeUnite;
        bool gauche;
        Base* base;
        int argent;
};

#endif // JOUEUR_H
