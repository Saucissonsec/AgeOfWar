#include "ObjetTerrain.h"

ObjetTerrain::ObjetTerrain(std::string name, int HP) : m_name(name), m_HP(HP)
{

}

ObjetTerrain::~ObjetTerrain()
{
    //dtor
}

void ObjetTerrain::printInfos()
{
    std::cout<<m_name<<"\n HP :  " << m_HP
    << "\n Position : " << m_pos;
}

std::ostream& operator <<(std::ostream& os, const ObjetTerrain& obj)
{
    os<< obj.m_name
    << "\n HP :  " << obj.m_HP
    << "\n Position : " << obj.m_pos
    << std::endl;

    return os;
}
