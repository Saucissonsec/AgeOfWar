#ifndef OBJETTERRAIN_H
#define OBJETTERRAIN_H
#include <string>
#include <iostream>


class ObjetTerrain
{
    public:
        ObjetTerrain(std::string nom);
        virtual ~ObjetTerrain();

        int getHP();

        void setHP(int val); //Lorssque l'unit� prend des dommages ou se fait soigner

        void printInfos();

    protected:

    private:
        int m_HP;   //sant� de l'unit�
        int m_atk;  //valeur d'attaque
        int m_pos; //position sur le plateau

        std::string m_name;
        int ID; //besoin pour identifier des objets de m�me nom?

};

#endif // OBJETTERRAIN_H
