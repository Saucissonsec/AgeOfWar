#include "ObjetTerrain.h"

ObjetTerrain::ObjetTerrain(std::string name)
{
    m_name = name;
}

ObjetTerrain::~ObjetTerrain()
{
    //dtor
}

int ObjetTerrain::getHP()
{
    return m_HP;
}

void ObjetTerrain::setHP(int val)
{
    m_HP = val;
}

void ObjetTerrain::printInfos()
{
    std::cout<<m_name<<std::endl;
}
