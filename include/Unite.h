#ifndef UNITE_H
#define UNITE_H

#include <ObjetTerrain.h>


class Unite : public ObjetTerrain
{
    public:
        Unite(std::string name);
        virtual ~Unite();
        void attack(ObjetTerrain *taget); //attaque la cible
        int move(); //fait bouger l'unité : renvoie la position si besoin
        int playTurn(); //détermine la succesion d'actions pour ce tour, renvoie la dernière action effectuée

    protected:

    private:
        int m_HP;
        int m_prix;
        int m_atk;
        int m_minRange;
        int m_maxRange;
};

#endif // UNITE_H
