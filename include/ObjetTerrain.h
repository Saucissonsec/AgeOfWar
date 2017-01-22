#ifndef OBJETTERRAIN_H
#define OBJETTERRAIN_H
#include <string>
#include <iostream>
class Case;


class ObjetTerrain
{
    public:
        ObjetTerrain(std::string nom, int HP = 0);
        virtual ~ObjetTerrain();

        int getHP(){return m_HP;};

        void setHP(int val){m_HP = val;}; //Lorsque l'unit� prend des dommages ou se fait soigner

        void setPos(Case* pos){m_pos = pos;};

        void printInfos();

        friend std::ostream& operator<<(std::ostream& os, const ObjetTerrain& obj);

    protected:

    private:
        int m_HP;   //sant� de l'unit�

        Case* m_pos; //position sur le plateau

        std::string m_name;
        int ID; //besoin pour identifier des objets de m�me nom?

};

#endif // OBJETTERRAIN_H
