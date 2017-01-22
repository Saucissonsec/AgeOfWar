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
        void getGold(int gold = 8); //par d�faut 8 pi�ce � chaque tour, on utilise le param�tre lors d'un combat remport�

    protected:

    private:
        std::vector<Unite> listeUnite;
        bool gauche;
        Base* base;
        int argent;
};

#endif // JOUEUR_H
