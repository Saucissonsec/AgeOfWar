#ifndef OBJETTERRAIN_H
#define OBJETTERRAIN_H
#include <string>
#include <iostream>


class ObjetTerrain
{
    public:
        ObjetTerrain(std::string nom, int HP = 0);
        virtual ~ObjetTerrain();

        int getHP(){return m_HP;};

        void setHP(int val){m_HP = val;}; //Lorssque l'unit� prend des dommages ou se fait soigner

        void printInfos();

        friend std::ostream& operator<<(std::ostream& os, const ObjetTerrain& obj);

    protected:

    private:
        int m_HP;   //sant� de l'unit�

        int m_pos; //position sur le plateau

        std::string m_name;
        int ID; //besoin pour identifier des objets de m�me nom?

};

#endif // OBJETTERRAIN_H
