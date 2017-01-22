#ifndef JEU_H
#define JEU_H

#include "Joueur.h"
#include "PlayingArea.h"

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

    protected:

    private:
        PlayingArea t;
        Joueur J1;
        Joueur J2;
};

#endif // JEU_H
