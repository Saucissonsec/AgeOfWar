#ifndef UNITE_H
#define UNITE_H

#include <ObjetTerrain.h>


class Unite : public ObjetTerrain
{
    public:
        Unite(std::string name, int HP = 0, int atk = 0, int prix = 0,
              int minRange = 1, int maxRange = 1);
        virtual ~Unite();
        void attack(ObjetTerrain *taget); //attaque la cible
        void wait();
        int move(); //fait bouger l'unité : renvoie la position si besoin
        int playTurn(); //détermine la succesion d'actions pour ce tour, renvoie la dernière action effectuée
        void printInfos();
        friend std::ostream& operator <<(std::ostream& os, const Unite& unit);

    protected:

    private:

        int m_prix;
        int m_atk;  //valeur d'attaque
        int m_minRange;
        int m_maxRange;
};

#endif // UNITE_H
